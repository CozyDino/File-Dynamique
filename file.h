#ifndef _FILE_
#define _FILE_

#include <stdlib.h>
#include <stdbool.h>

//D�finition des types:
typedef int element;

typedef struct t_cell
{
	element e;
	struct t_cell* next;
} cell;

typedef struct
{
	cell* premier;
	cell* dernier;
} file;

//Prototypes

file init_file();
//Pr�condition : Aucune;
//Retourne une file initialis�

bool file_vide(file f);
//Pr�condition : File en param�tre;
// Post : Retourne un bool�en si la file est vide ou non

void ajouter(file*, element);

void retirer(file*);

element premier(file);

element dernier(file);

#endif
