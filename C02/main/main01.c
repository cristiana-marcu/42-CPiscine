#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char *src = "colacao";
	printf("Original: %s\n", src);
	char dest[15];
	ft_strncpy(dest, src, 12);
	printf("Destino: %s", dest);
}
