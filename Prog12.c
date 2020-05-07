#include <stdio.h>
#include <string.h>

#define DENSIDAD 62.4

int main(void)
{
        float peso, volumen;
        int letras, tamano;
        char nombre[40];
        
        printf("\n¡Hola! ¿Como te llamas? ");
        scanf("%s", nombre);
        
        printf("\n%s, ¿Cual es tu peso en libras?", nombre);
        scanf("%f", &peso);
        
        tamano = sizeof nombre;
        letras = strlen(nombre);
        volumen = peso / DENSIDAD;
        
        printf("\nEntonces, %s, tu volumen es %05.2f libras por pie cubico.\n", nombre, volumen);
        printf("Tambien, tu nombre tiene %d letras,", letras);
        printf(" y tenemos %d bytes para guardarle.\n\n", tamano);
        
        return 0;
        
}
