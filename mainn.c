#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main()
{
	char	*str;

	str = malloc(sizeof(char) * 12);
	printf("%lu\n", sizeof(str));
	(str + 12) = malloc(sizeof(char) * 3);
	printf("%lu\n", sizeof(str));
}