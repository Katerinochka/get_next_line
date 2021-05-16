#include "get_next_line.h"
#include <fcntl.h>

int	main()
{
	int		fp;
	char	*str;

	fp = open("my.txt", O_RDONLY);
	printf("\n%d", get_next_line(fp, &str));
	fp = open("my.txt", O_RDONLY);
	
}
