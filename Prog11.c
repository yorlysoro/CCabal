#include <stdio.h>

int main(void)
{
        float salario;
        
        printf("Introduzca su sueldo mensual deseado: ");
        printf("$_______\b\b\b\b\b\b\b");
        
        scanf("%f", &salario);
        
        printf("\n\t$%.2f al mes es $%.2f al año.", salario, salario * 12.0);
        printf("\rWow!\n");
        return 0;
}
