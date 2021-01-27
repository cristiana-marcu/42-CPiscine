#include <stdio.h>

void ft_div_mod( int a, int b, int *div, int *mod);

int main()
{
	int a = 42;
	int b = 24;
	int div = 0;
	int mod = 0;
	printf("div antes de llamar a la función: %d, módulo: %d\n", div, mod);
	ft_div_mod(a, b, &div, &mod); 
	printf("div después de llamar a la función: %d, módulo: %d", div, mod);
	return (0);
}
