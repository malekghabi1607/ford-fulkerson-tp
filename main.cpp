
#include <iostream>
#include "utilities.h"

using namespace std;

int main()
{
    cout << "Test de l'algorithme Ford-Fulkerson" << endl;

    // Définition de la matrice des capacités (graphe donné dans l'énoncé)
    int matrice1[6][6] = {
        {0, 6, 6, 0, 0, 0},
        {6, 0, 0, 5, 0, 0},
        {6, 0, 0, 4, 3, 0},
        {0, 5, 4, 0, 0, 7},
        {0, 0, 3, 0, 0, 4},
        {0, 0, 0, 7, 4, 0}};

    // Matrice des flots initialement à 0
    int matrice2[6][6] = {0};

    // Pointeurs vers les matrices
    int *c[6], *f[6];
    for (int i = 0; i < 6; i++)
    {
        c[i] = matrice1[i];
        f[i] = matrice2[i];
    }

    // Calcul du flot maximum de la source (0) au puits (5)
    int maxFlow = fordfulkerson(c, f, 6, 0, 5);

    // Affichage des résultats
    cout << "Flot maximum trouvé : " << maxFlow << endl;
    affichage(c, f, 6);

    return 0;
}
