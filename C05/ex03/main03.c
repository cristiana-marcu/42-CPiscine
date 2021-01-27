#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main()
{
	int number = 5;
	int power = 5;
	int result = ft_recursive_power(number, power);
	printf("%d", result);
}
