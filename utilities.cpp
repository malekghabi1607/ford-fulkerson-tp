
#include <iostream>
#include <fstream>
#include <stack>
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
/****************************************************/
bool chaineaugmentante(int* c[], int* f[], int n, int ch[],int s, int t, bool visite[])
{
	return(0);
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
int increment(int* c[], int* f[], int n, int ch[], int s, int t)
{
	return(0);
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
int fordfulkerson(int* c[], int* f[], int n, int s, int t)
{
	return(0);



}

