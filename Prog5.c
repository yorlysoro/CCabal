#include <stdio.h>

int main(void)
{
        float peso;
        
        printf("¿Vale usted su peso en rhodium?\n");
        printf("Vamos a ver.\n");
        printf("Ingrese su peso en libras: ");
        
        scanf("%f", &peso);
        
        printf("Su peso en rhodium vale $%.2f.\n", (770.0 * peso * 14.5833));
        printf("Si el valor de rhodium baja,\n");
        printf("come mas par mantener su valor.\n");
        
        return 0;
}
