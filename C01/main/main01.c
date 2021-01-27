#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main()
{
	int *ptr;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********nbr;
	int a;

	a = 42;
	ptr = &a;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	nbr = &ptr8;
	ft_ultimate_ft(nbr);
	printf("El puntero del puntero del puntero blabla vale: %p\n", nbr);
	printf("Y su valor es: %d", *********nbr);
	return (0);
}
