#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	unsigned char Mascara = 0x00, Semaforos;
	
	char Buf[7];
	
	int i, Prueba;
	
	puts("\nEl bitwise OR esta usado a veces a");
	puts("prende algunas en un entero\n");
	printf("Dame un numero positivo enter 0 y 255: ");
	while(fgets(Buf, 5, stdin) && Buf[0] != '\n')
	{
		if(*(Buf + strlen(Buf) - 1) != '\n')
		{
			fputs("La linea que entrastes es demaciado largo.\nSolo 3 chars MAX", stderr);
			exit(1);
		}
		*(Buf + strlen(Buf) - 1 ) = '\0';
		
		for(i = 0; i < strlen(Buf); i++)
		{
			if(Buf[i] < '0' || Buf[i] > '9')
			{
				fputs("Caracteres ilegales en un ingreso\n", stderr);
				exit(1);
			}
		}
		
		Prueba = atoi(Buf);
		if(Prueba > 255)
		{
			fputs("Su entrada esta fuera del rango especificado\n", stderr);
			exit(1);
		}
		
		for(i = 1; i <= 8; i++)
		{
			if(i == 1)
			Mascara = 0x01;
			else
			Mascara <<= 1;
			
			Semaforos = Prueba;
			Semaforos |= Mascara;
			printf("Su numero %d se cambia a %d cuando bit %d esta prendida\n", Prueba, Semaforos, i - 1);
		}
		printf("\nDame un numero positivo entre 0 y 255"
			"(<Enter> para terminar): ");
	}
	return 0;
		
}
