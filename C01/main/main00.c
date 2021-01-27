#include <stdio.h>

void ft_ft(int *nbr);

int main()
{
	int a = 0;
	int *nbr;

	nbr = &a;
	printf("El valor de a antes de llamar a la función es: %d\n", a);
	ft_ft(nbr);
	printf("Después de llamarla, a vale: %d", a);
}
