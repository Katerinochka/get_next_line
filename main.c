#include "get_next_line.h"
#include <fcntl.h>

int	main()
{
	int		fp;
	char	*str;

	fp = open("my.txt", O_RDONLY);
	/*while (get_next_line(fp, &str))
	{
		printf("%s\n", str);
	}*/
	printf("%d\n", get_next_line(fp, &str));
	printf("%s\n", str);
	printf("%d\n", get_next_line(fp, &str));
	printf("%s\n", str);
	/*printf("%d\n", get_next_line(fp, &str));
	printf("%s\n", str);
	printf("%d\n", get_next_line(fp, &str));
	printf("%s\n", str);*/
	/*printf("%d\n", get_next_line(fp, &str));
	printf("%s", str);*/
}
