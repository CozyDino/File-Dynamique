#include <stdio.h>
#include "file.h"


file init_file()
{
	file tmp;
	tmp.premier = NULL;
	tmp.dernier = NULL;
	return tmp;
}

bool file_vide(file f)
{
	return f.dernier == NULL && f.premier == NULL;
}

void ajouter(file* f, element e1)
{
	cell* tmp = (cell*)malloc(sizeof(cell));
	if(f->premier == NULL)
	{
		f->premier = tmp;
		f->dernier = tmp;
	}
	else
	{
		f->dernier->next = tmp;
		f->dernier = tmp;
	}
	tmp->e = e1;
}

void retirer(file* f)
{
	cell* tmp = NULL;
	if(f->dernier == f->premier)
	{
		free(f->dernier);
		free(f->premier);
		f->dernier = NULL;
		f->premier = NULL;
	}
	else
	{
		tmp = f->premier;
		f->premier = f->premier->next;
		free(tmp);
	}
}

element premier(file f)
{
	return f.premier->e;
}

element dernier(file f)
{
	return f.dernier->e;
}