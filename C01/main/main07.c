#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
	int tab[6] = {0, 1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, 6);
	for(int i = 0; i < 6; i++)
	{
		printf("%d ", tab[i]);
	}
}
