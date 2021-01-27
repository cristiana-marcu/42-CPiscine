#include <unistd.h>

void ft_putnbr_base(int nbr, char *base);

int main()
{
	int number = -2147483;
	char *binary_base = "01234";

	ft_putnbr_base(number, binary_base);
}
