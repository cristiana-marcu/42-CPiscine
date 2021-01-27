#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
	 int a = 42;
	 int b = 24;
	 printf("a antes de la función vale: %d, b vale: %d\n", a, b);
	 ft_ultimate_div_mod(&a, &b);
	 printf("a después de la función vale: %d, b vale: %d\n", a, b);
}
