#include "Prog108.h"
#include <stdio.h>
#include <stdlib.h>

int ContarLosTiros = 0;

static int rollem(int Lados)
{
	int Tira;
	
	Tira = rand() % Lados + 1;
	++ContarLosTiros;
	return Tira;
}

int Tira_n_Dados(int Dados, int Lados)
{
	int d;
	int total = 0;
	
	for(d = 0; d < Dados; d++)
	total += rollem(Lados);
	
	return total;
}
