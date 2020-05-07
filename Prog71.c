#include <stdio.h>

int main(void)
{
	int datos[2] = {100, 200},
	masdatos[2] = {300, 400},
	* p1, * p2, * p3;
	
	p1 = p2 = datos;
	p3 = masdatos;
	
	printf(" *p1 = %d, *p2 = %d, *p3 = %d\n",
	*p1 , *p2, *p3);
	
	printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n",
	*p1++, *++p2, (*p3)++);
	
	printf("*p1 = %d, *p2 = %d, *p3 = %d\n",
	*p1, *p2, *p3);
	
	return 0;
}
