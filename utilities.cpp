
#include <iostream>
#include <fstream>
#include <stack>
#include <climits>
#include "utilities.h"

using namespace std;

void affichage(int* c[], int* f[], int n)
{
	cout << "c = " << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < (n-1); j++)
			cout << c[i][j] << "\t";
		cout << c[i][n-1] << endl;
	}


	cout << endl << "f = " << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < (n-1); j++)
			cout << f[i][j] << "\t";
		cout << f[i][n-1] << endl;
	}
}

/****************************************************/
/* Entrées :                                        */
/* c : matrice des capacités des arcs du réseau     */
/* f : matrice des flots sur les arcs               */
/* n : nombre de noeuds du réseau                   */
/* s : sommet source                                */
/* t : sommet destination                           */
/* visite : tableau permettant de marquer les       */
/* sommets visites				    */
/****************************************************/
/* Sorties : 					    */
/* - ch : chaîne augmentante de s à t        	    */
/* (s'il en existe)                                 */
/* - La fonction renvoie vrai si une chaîne 	    */
/* augmentante a été trouvée et faux sinon	    */
/****************************************************/ bool chaineaugmentante(int *c[], int *f[], int n, int ch[], int s, int t, bool visite[])
{
	stack<int> P; // Utilisation d'une pile pour DFS
	bool stop = false;

	// Initialisation
	for (int i = 0; i < n; i++)
	{
		visite[i] = false;
		ch[i] = -1;
	}

	P.push(s);

	while (!P.empty() && !stop)
	{
		int i = P.top();
		P.pop();

		if (i == t)
		{
			stop = true;
		}
		else
		{
			visite[i] = true;
			for (int j = 0; j < n; j++)
			{
				if (!visite[j])
				{
					if ((c[i][j] > 0 && f[i][j] < c[i][j]) || (c[j][i] > 0 && f[j][i] > 0))
					{
						P.push(j);
						ch[j] = i;
					}
				}
			}
		}
	}
	return stop;
}

/****************************************************/
/* Entrées :                                        */
/* c : matrice des capacités des arcs du réseau     */
/* f : matrice des flots sur les arcs               */
/* n : nombre de noeuds du réseau                   */
/* s : sommet source                                */
/* t : sommet destination                           */
/* ch : chaîne augmentante de s à t                 */
/* Sortie : valeur d'augmentation du flot           */
/****************************************************/
int increment(int *c[], int *f[], int n, int ch[], int s, int t)
{
	int delta = INT_MAX; // Capacité minimale du chemin trouvée

	// Trouver la capacité résiduelle minimale sur la chaîne augmentante
	for (int v = t; v != s; v = ch[v])
	{
		int u = ch[v]; // Prédécesseur de v
		if (c[u][v] > 0)
		{
			delta = min(delta, c[u][v] - f[u][v]); // Capacité restante
		}
		else
		{
			delta = min(delta, f[v][u]); // Flot en sens inverse
		}
	}

	// Appliquer l'augmentation du flot
	for (int v = t; v != s; v = ch[v])
	{
		int u = ch[v];
		if (c[u][v] > 0)
		{
			f[u][v] += delta; // Ajouter du flot sur l'arc
		}
		else
		{
			f[v][u] -= delta; // Soustraire du flot pour refléter le sens inverse
		}
	}

	return delta;
}

/****************************************************/
/* Entrées :                                        */
/* c : matrice des capacités des arcs du réseau     */
/* f : matrice des flots sur les arcs               */
/* n : nombre de noeuds du réseau                   */
/* s : sommet source                                */
/* t : sommet destination                           */
/* Sortie : Flot Max de s à t                       */
/****************************************************/
int fordfulkerson(int *c[], int *f[], int n, int s, int t)
{
	int flot_max = 0;
	int ch[n];		// Tableau pour stocker la chaîne augmentante
	bool visite[n]; // Marquage des sommets visités

	// Tant qu'il existe une chaîne augmentante
	while (chaineaugmentante(c, f, n, ch, s, t, visite))
	{
		int delta = increment(c, f, n, ch, s, t); // Calcul du flot à ajouter
		flot_max += delta;						  // Mise à jour du flot total
	}

	return flot_max; // Retourne la valeur du flot maximal
}