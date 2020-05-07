#include <stdio.h>

int respuesta = 0;
void critic(void);

int main(void)
{
	extern int respuesta;
	
	printf("Cuantos libras tiene un firkin de mantequilla?");
	scanf("%d", &respuesta);
	
	while(respuesta != 56)
	critic();
	
	printf("Correcto!\n");
	
	return 0;
}

void critic(void)
{
	printf("No, Reintenta: ");
	scanf("%d", &respuesta);
}
