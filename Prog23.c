#include <stdio.h>

int main(void)
{
        int edad;
        float valor;
        char mascota[30];
        
        printf("Escribe su edad, valor y mascota favorita.\n");
        scanf("%d %f", &edad, &valor);
        scanf("%s", mascota);
        printf("su edad: %d\nsu valor: $%.2f\nsu mascota favorita: %s\n", edad, valor, mascota);
        
        return 0;
}
