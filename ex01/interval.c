#include <stdio.h>
#include <stdlib.h>

int	compare_to_interval(int a, int b, int x)
{
	if (x < a)
		return (-1);
	if (x > b)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
    (void)argc;
	printf("%d",compare_to_interval(atoi(argv[1]), atoi(argv[2]), atoi(argv[3])));
	printf("\n");
    return (0);
}
