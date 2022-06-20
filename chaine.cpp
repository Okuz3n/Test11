#include "chaine.h"
#include <iostream>

chaine::chaine(void)
{ s=NULL; //La cha�ne est initialis�e avec le pointeur nul
return ;
}
chaine::chaine(unsigned int Taille)
{ s = new char[Taille+1]; //Alloue de la m�moire pour la cha�ne
s[0]='\0'; // Initialise la cha�ne � ""
return; }
chaine::~chaine(void)
{ if (s!=NULL) delete[] s; //Restitue la m�moire utilis�e si n�cessaire
return;
}
