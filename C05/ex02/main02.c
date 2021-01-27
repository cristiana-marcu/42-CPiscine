#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main()
{
	int number = 5;
	int power = 3;
	int result = ft_iterative_power(number, power);
	printf("%d", result);
}
