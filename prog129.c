#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	unsigned char Mascara, Semaforos;
	
	char Buf[7];
	
	int i, Prueba;
	
	puts("\nEl bitwiese AND esta usado a veces a");
	puts("pagar algunas bits en un entero\n");
	printf("Dame un numero positivo entre 0 y 255: ");
	while(fgets(Buf, 5, stdin) && Buf[0] != '\n')
	{
		if(*(Buf + strlen(Buf) - 1) != '\n')
		{
			fputs("La linea que entrastes es demasiado largo.\nSolo 3 chars MAX", stderr);
			exit(1);
		}
		*(Buf + strlen(Buf) - 1) = '\0';
		
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
		
		for(i = 1; i <= 8; i++)
		{
			switch(i)
			{
				case 1: Mascara = 0xfe;
				Semaforos = Prueba;
				Semaforos &= Mascara;
				printf("Sun numero %d se cambia a %d cuando bit %d esta apagada\n", Prueba, Semaforos, i - 1);
				break;
				case 2: Mascara = 0xfd;
				Semaforos = Prueba;
				Semaforos &= Mascara;
				printf("Su numero %d se cambia a %d cuando bit %d esta apagada\n", Prueba, Semaforos, i -1);
				break;
				case 3: Mascara = 0xfb;
				Semaforos = Prueba;
				Semaforos &= Mascara;
				printf("Su numero %d se cambia a %d cuando bit %d esta apagada\n", Prueba, Semaforos, i - 1);
				break;
				case 4: Mascara = 0xf7;
				Semaforos = Prueba;
				Semaforos &= Mascara;
				printf("Su numero %d se cambia a %d cuando bit %d esta apagada\n", Prueba, Semaforos, i - 1);
				break;
				case 5: Mascara = 0xef;
				Semaforos = Prueba;
				Semaforos &= Mascara;
				printf("Su numero %d se cambia a %d cuando bit %d esta apagada\n", Prueba, Semaforos, i - 1);
				break;
				case 6: Mascara = 0xdf;
				Semaforos = Prueba;
				Semaforos &= Mascara;
				printf("Su numero %d se cambia a %d cuando bit %d esta apagada\n", Prueba, Semaforos, i - 1);
				break;
				case 7: Mascara = 0xbf;
				Semaforos = Prueba;
				Semaforos &= Mascara;
				printf("Su numero %d se cambian a %d cuando bit %d esta apagado\n", Prueba, Semaforos, i - 1);
				break;
				case 8: Mascara = 0x7f;
				Semaforos = Prueba;
				Semaforos &= Mascara;
				printf("Su numero %d se cambia a %d cuando bit %d esta apagada\n", Prueba, Semaforos, i - 1);
				break;
			}
		}
		printf("Dame un numero positivo entre 0 y 255"
		"(<Enter> para terminar): ");
	}
	return 0;
}
