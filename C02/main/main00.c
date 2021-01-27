#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
	char *original = "colacao";
	printf("Original: %s\n", original);
	char destino[8];
	ft_strcpy(destino, original);
	printf("Destino: %s", destino);
}
