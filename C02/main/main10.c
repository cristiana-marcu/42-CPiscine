#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	int length;
	char source[] = "Hello World!";
	char  destino[12];
	length = ft_strlcpy(destino, source, 15);
	printf("%d\n", length);
	printf("%s", destino);
}
