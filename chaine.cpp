#include "chaine.h"
#include <iostream>

chaine::chaine(void)
{ s=NULL; //La chaîne est initialisée avec le pointeur nul
return ;
}
chaine::chaine(unsigned int Taille)
{ s = new char[Taille+1]; //Alloue de la mémoire pour la chaîne
s[0]='\0'; // Initialise la chaîne à ""
return; }
chaine::~chaine(void)
{ if (s!=NULL) delete[] s; //Restitue la mémoire utilisée si nécessaire
return;
}
