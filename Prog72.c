#include <stdio.h>

int main(void)
{
	int urn[5] = {100,200,300,400,500};
	int * ptr1, * ptr2, * ptr3;
	
	ptr1 = urn;
	ptr2 = &urn [2];
	
	printf("Valor de pointer, Pointer dereferenciado, Direccion de pointer\n"
	"ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n",
	ptr1, *ptr1, &ptr1);
	
	ptr3 = ptr1 + 4;
	printf("\nAdicion de int a un pointer:\n");
	printf("ptr1 + 4 = %p, *(ptr1 + 3) = %d\n",
	ptr1 + 4, *(ptr1 + 3));
	
	ptr1++;
	printf("\nValores despues de ptr1++:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n",
	ptr1, *ptr1, &ptr1);
	
	ptr2--;
	printf("\nValores despues de --ptr2:\n");
	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n",
	ptr2, *ptr2, &ptr2);
	
	--ptr1;
	++ptr2;
	
	printf("\nPointer regresados a sus valores originales:\n");
	printf("ptr2 = %p, ptr1 = %p\n", ptr1, ptr2);
	
	printf("\nUn pointer menos otro pointer:\n");
	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %d\n",
	ptr2, ptr1, ptr2 - ptr1);
	
	printf("\nUn pointer menos un intero:\n");
	printf("ptr3 = %p, ptr3 - 2 = %p\n",
	ptr3, ptr3 - 2);
	
	return 0;
}
