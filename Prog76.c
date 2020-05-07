#include <stdio.h>

#define FILAS 3
#define COLS 4

void sum_filas(int ar[][COLS], int filas);
void sum_cols(int [][COLS], int);
int sum2d(int (*ar)[COLS], int filas);

int main(void)
{
	int junk[FILAS][COLS] = {
		{2,4,6,8},
		{3,5,7,9},
		{12,10,8,6}
	};
	
	sum_filas(junk, FILAS);
	sum_cols(junk, FILAS);
	printf("Sum de todos los elementos = %d\n", sum2d(junk, FILAS));
	
	return 0;
}

void sum_filas(int ar[][COLS], int filas)
{
	int c, r, tot;
	
	for(r = 0; r < filas; r++)
	{
		tot = 0;
		for(c = 0; c < COLS; c++)
		tot += ar[r][c];
		printf("fila %d: sum = %d\n", r, tot);
	}
}


void sum_cols(int ar[][COLS], int filas)
{
	int c, r, tot;
	
	for(c = 0; c < COLS; c++)
	{
		tot = 0;
		for(r = 0; r < filas; r++)
		tot = ar[r][c];
		printf("col %d: sum = %d\n", c, tot);
	}
}

int sum2d(int ar[][COLS], int filas)
{
	int c, r, tot = 0;
	for(r = 0; r < filas; r++)
	for(c = 0; c < COLS; c++)
	tot += ar[r][c];
	
	return tot;
}
