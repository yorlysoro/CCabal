#include <stdio.h>

int main (void)
{
        const double COSTO = 3852.99;
        
        printf("*%f*\n", COSTO);
        printf("*%e*\n", COSTO);
        printf("*%4.2f*\n", COSTO);
        printf("*%3.1f*\n", COSTO);
        printf("*%10.3f*\n", COSTO);
        printf("*123456789012345*\n" );
        printf("*%10.3e*\n", COSTO);
        printf("*%-10.3e*\n", COSTO);
        printf("*%+4.2f*\n", COSTO);
        printf("*%010.2f*\n", COSTO);
        
        return 0;
}
