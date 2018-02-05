#include "file.h"
#include <stdio.h>

int main(void)
{
	file file1;
	file1 = init_file();
	ajouter(&file1, 5); 
	printf("premier : %d, dernier : %d \n", premier(file1), dernier(file1));
	ajouter(&file1 , 4);
	retirer(&file1);
	printf("premier : %d, dernier : %d \n",premier(file1),dernier(file1));
	retirer(&file1);
} 