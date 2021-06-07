#include "get_next_line.h"
#include <fcntl.h>
#include <string.h>

int	main()
{
	int		fp;
	char	*str, *str1, *str2;

	fp = open("my.txt", O_RDONLY);
	/*while (get_next_line(fp, &str))
	{
		printf("%s\n", str);
	}*/
	printf("%d\n", get_next_line(fp, &str));
	//printf("%lu\n", strlen(str));
	printf("%s\n", str);
	printf("%d\n", get_next_line(fp, &str1));
	printf("%s\n", str1);
	printf("%d\n", get_next_line(fp, &str2));
	printf("%s\n", str2);
	/*printf("%d\n", get_next_line(fp, &str));
	printf("%s\n", str);
	printf("%d\n", get_next_line(fp, &str));
	printf("%s\n", str);*/
	/*printf("%d\n", get_next_line(fp, &str)); 
	printf("%s", str);*/
}
