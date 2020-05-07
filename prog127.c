#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	unsigned char Mascara, Semaforos;
	
	char Buf[7];
	
	int i, Prueba;
	
	puts("\nEl bitwise AND esta usado a veces a ver");
	puts("si algunas bits en un entero estan prendido o apagados\n");
	printf("Dame un numero positivo enter 00 y 255: ");
	while(fgets(Buf, 5, stdin) && Buf[0] != '\n')
	{
		if(*(Buf + strlen(Buf) - 1) != '\n')
		{
			fputs("La linea que entrastes es demasiado largo.\nSolo 3 chars MAX", stderr);
			exit(1);
		}
		*(Buf + strlen(Buf) - 1 ) = '\0';
		
		for(i = 0; i < strlen(Buf); i++)
		{
			if(Buf[i] < '0' || Buf[i] > '9')
			{
				fputs("Caracteres ilegales en su ingreso\n", stderr);
				exit(1);
			}
		}
		
		Prueba = atoi(Buf);
		if(Prueba > 255)
		{
			fputs("Su entrada esta fuera del rango especificado\n", stderr);
			exit(1);
		}
		
		Semaforos = Prueba;
		
		for(i = 1; i <= 8; i++)
		{
			if(i == 1)
			Mascara = 0x01;
			else
			Mascara <<= 1;
			Semaforos & Mascara ?
			printf("Bit No. %d en %d esta prendida		1\n", i - 1, Semaforos):
			printf("Bit No. %d en %d no esta prendida 	0\n", i - 1, Semaforos);
		}
		printf("\nDame un numero positivo entero enter 0 y 255"
		"(<Enter> para terminar): ");
	}
	return 0;
}
