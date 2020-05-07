#include <stdio.h>

#define MSG "Debe tener muchos talentos. Me dicen algunos."
#define LIM 5
#define LINEATAMANO 81

int main(void)
{
	char nombre[LINEATAMANO], talentos[LINEATAMANO];
	const char m1[40] = "Limitarte a una sola linea.",
	m2[] = "Si no puedes pensar en nada, falsificalo.",
	*m3 = "\nSuficiente acerda de mi - ¿Cual es tu nombre?",
	*mital[LIM] = {
		"Adicion de numeros rapidamente",
		"Multiplicacion exactamente",
		"Esconder datos",
		"Siguiendo instrucciones con precision",
		"Compresion del lenguaje C"
	};
	
	int i;
	
	printf("¡Hola Soy clyde, la computadora."
	"Tengo muchos talentos.\n");
	printf("Dejeme decirle algunso de ellos.\n");
	puts("¿Que era ello? Ah, si, aqui esta una lista parcial.");
	for(i = 0; i < LIM; i++ )
	puts(mital[i]);
	puts(m3);
	gets(nombre);
	printf("Entonces %s, %s\n", nombre, MSG);
	printf("%s\n%s\n", m1, m2);
	gets(talentos);
	puts("Vamos a ver si tengo la lista: ");
	puts(talentos);
	printf("Gracias por la informacion, %s.\n", nombre);
	
	return 0;
}
