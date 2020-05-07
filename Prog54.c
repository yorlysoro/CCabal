#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	
	puts("Dame una letra alfabetica");
	puts(" y te da un nombre de un animal que inicia con el ");
	printf("entra \'#\' para terminar ");
	
	while((ch = getchar() ) != '#')
	{
		if('\n' == ch)
		continue;
		if(islower(ch))
		switch(ch)
		{
			case 'a':
			puts("argaril, una oveja salvaje de Asia");
			break;
			case 'b':
			puts("babirusa, un cerdo salvaje de Malayo");
			break;
			case 'c':
			puts("coati, un mamifero parecido a un mapache");
			break;
			case 'd':
			puts("desman, animal acuatico, parecido a un topo");
			break;
			case 'e':
			puts("echinda, el oso hormiguero espinoso");
			break;
			default:
			puts("¡No se!");
		}
		else
		puts("Solo conozco letras minusculas");
		while(getchar() != '\n');
		printf("Por favor dame una otra letra o \'#\' para terminar ");
	}
	puts("Au revoir!");
	return 0;
}
