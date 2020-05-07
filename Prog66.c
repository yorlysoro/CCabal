#include <stdio.h>

void a_binario(unsigned long n);

int main(void)
{
	unsigned long numero;
	printf("Que intero quieres convertir en binario(q para terminar)?.\n");
	while(scanf("%lu", &numero) == 1 )
	{
		printf("Equivalente Binario: ");
		a_binario(numero);
		putchar('\n');
		putchar('\n');
		printf("Que quieres convertir en binario(q para terminar)? ");
	}
	
	printf("Listo.\n");
	
	return 0;
}

void a_binario(unsigned long n)
{
	int r;
	
	r = n % 2;
	if(n >= 2)
	a_binario(n/2);
	putchar('0' + r);
	
	return;
}
