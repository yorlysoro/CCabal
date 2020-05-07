#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("strcmp (\"A\", \"A\") es %d \n", strcmp("A", "A") );
	
	printf("strcmp(\"A\", \"B\") es %d\n", strcmp("A", "B") );
	
	printf("strcmp(\"B\", \"A\") es %d\n", strcmp("C", "A") );
	
	printf("strcmp(\"Z\", \"a\") es %d\n", strcmp("Z", "a") );
	
	printf("strcmp(\"manzana\", \"manzana\") es %d\n", strcmp("manzana", "manzana") );
	
	return 0;

}
