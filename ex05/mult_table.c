#include <stdio.h>
#include <stdlib.h>

void    mult_table(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
}

int     main(int argc, char **argv)
{
    (void)argc;
    mult_table(atoi(argv[1]));
}