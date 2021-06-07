#include "get_next_line.h"
#include <fcntl.h>
#include <string.h>

int	main()
{
	int		fp;
	char	*str, *str1, *str2, *str3, *str4;

	fp = open("my.txt", O_RDONLY);
	printf("%d\n", get_next_line(fp, &str));
	printf("%s\n", str);
	printf("%d\n", get_next_line(fp, &str1));
	printf("%s\n", str1);
	printf("%d\n", get_next_line(fp, &str2));
	printf("%s\n", str2);
	printf("%d\n", get_next_line(fp, &str3));
	printf("%s\n", str3);
	printf("%d\n", get_next_line(fp, &str4));
	printf("%s\n", str4);
	/*printf("%d\n", get_next_line(fp, &str));
	printf("%s\n", str);
	printf("%d\n", get_next_line(fp, &str));
	printf("%s\n", str);*/
	/*printf("%d\n", get_next_line(fp, &str)); 
	printf("%s", str);*/
}
