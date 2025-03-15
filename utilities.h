

#ifndef _UTIL_H_
#define _UTIL_H_

void affichage(int* c[], int* f[], int n);
bool chaineaugmentante(int* c[], int* f[], int n, int ch[],int s, int t, bool visite[]);
int increment(int* c[], int* f[], int n, int ch[], int s, int t);
int fordfulkerson(int* c[], int* f[], int n, int s, int t);

#endif
