#include <stdio.h>

#define FILAS 3
#define COLS 4

int sum2d(int rows, int cols, int ar[rows][cols]);

int main(void)
{
	int cs = 10, i, j, junk[FILAS][COLS] = { {2,4,6,8}, {3,5,7,9}, {12,10,8,6} },
	masjunk[FILAS - 1][COLS + 2] = { {20,30,40,50,60,70}, {5,6,7,8,9,10} },
	rs = 3, varr[rs][cs];
	for(i = 0;i < rs;i++)
	for(j = 0; j < cs; j++)
	varr[i][j] = i * j + j;
	
	printf("3x5 arreglo\n");
	printf("sum de todos los elementos = %d\n",
	sum2d(FILAS, COLS, junk));
	
	printf("2x6 arreglo\n");
	printf("sum de todos los arreglos = %d\n",
	sum2d(FILAS - 1, COLS + 2, masjunk));
	
	printf("3x10 VLA\n");
	printf("sum de todos los elementos = %d\n",
	sum2d(rs, cs, varr));
	
	return 0;
}

int sum2d(int rows, int cols, int ar[rows][cols])
{
	int r;
	int c;
	int tot = 0;
	
	for(r = 0; r < rows; r++ )
	for(c = 0; c < cols; c++ )
	tot += ar[r][c];
	return tot;
}
