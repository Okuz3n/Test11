#ifndef _STDIO_H_
#define _STDIO_H_
class chaine // Impl�mente une cha�ne de caract�res
{ char * s; // Le pointeur sur la cha�ne de caract�res
public:
chaine(void); // Le constructeur par d�faut
chaine(unsigned int); // Le constructeur. Il n'a pas de type
~chaine(void); // Le destructeur
};
#endif
