#ifndef _FILE_
#define _FILE_

#include <stdlib.h>
#include <stdbool.h>

//Définition des types:
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
//Précondition : Aucune;
//Retourne une file initialisé

bool file_vide(file f);
//Précondition : File en paramètre;
// Post : Retourne un booléen si la file est vide ou non

void ajouter(file*, element);

void retirer(file*);

element premier(file);

element dernier(file);

#endif
