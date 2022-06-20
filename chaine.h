#ifndef _STDIO_H_
#define _STDIO_H_
class chaine // Implémente une chaîne de caractères
{ char * s; // Le pointeur sur la chaîne de caractères
public:
chaine(void); // Le constructeur par défaut
chaine(unsigned int); // Le constructeur. Il n'a pas de type
~chaine(void); // Le destructeur
};
#endif
