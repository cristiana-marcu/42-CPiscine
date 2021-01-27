#include <stdio.h>

void ft_swap(int *a, int *b);

int main()
{
	int a = 24;
	int b= 57;
	printf("Antes de llamar a la función a vale: %d, b vale: %d\n", a, b);
	ft_swap(&a, &b);
	printf("Después de llamar a la función a vale: %d, b vale: %d", a, b);
}
