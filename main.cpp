
#include <iostream>
#include "utilities.h"

using namespace std;

int main() {

    cout << "Écrire dans le main vos propres tests" << endl;
    
    int matrice1[6][6] = {{0,6,6,0,0,0},{6,0,0,5,0,0},
                          {6,0,0,4,3,0},{0,5,4,0,0,7},
                          {0,0,3,0,0,4},{0,0,0,7,4,0}
     };
                
    int matrice2[6][6] = {{0,0,0,0,0,0},{0,0,0,0,0,0},
                          {0,0,0,0,0,0},{0,0,0,0,0,0},
                          {0,0,0,0,0,0},{0,0,0,0,0,0}
     };
                         
    int* c[] = {&matrice1[0][0], &matrice1[1][0], &matrice1[2][0], &matrice1[3][0], &matrice1[4][0], &matrice1[5][0]};
    int* f[] = {&matrice2[0][0], &matrice2[1][0], &matrice2[2][0], &matrice2[3][0], &matrice2[4][0], &matrice2[5][0]};

    fordfulkerson(c,f,6,0,5);
    
    affichage(c,f,6);      
}
