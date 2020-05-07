#include <stdio.h>

int main(void)
{
        float Float = 32000.0;
        double Double = 2.14e9;
        long double LongDouble = 5.32e-5;
        
        printf("%f puede escribirse como %e\n", Float, Float);
        printf("%f puede escribirse como %e\n", Double, Double);
        printf("%Lf puede escribirse como %Le\n", LongDouble, LongDouble);
        
        return 0;
}
