/* Crear una funcion */
#include <stdio.h>

void mesero(void);

int main(void)
{
        printf("Voy a convocar al mesero.\n");
        mesero();
        printf("Si. Trae algunos DVDs grabables y té.\n");
        return 0;
}

void mesero(void)
{
        printf("¿Me llamó, señor?\n");
}
