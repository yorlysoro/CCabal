#include <stdio.h>

int main(void)
{
        int costo = 3100,
        numero = 5;
        const float PI = 3.141593;
        float espresso = 13.5;
        
        printf("Los %d CEOs bebieron %f tasas de espresso.\n", numero, espresso);
        printf("El valor de PI es %f.\n", PI);
        printf("%c%d\n", '$', 2 * costo);
        return 0;
}
