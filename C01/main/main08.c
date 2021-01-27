#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main()
{
	int tab[5] = {0, 6798, -654, 67890, 0};
	ft_sort_int_tab(tab, 5);
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", tab[i]);
	}
}
