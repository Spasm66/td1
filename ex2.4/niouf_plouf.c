#include <stdio.h>
#include <stdlib.h>

int    multiple(int a, int b)
{
    if (a % b)
        return (0);
    return (1);
}

int    contient(int a, int b)
{
    while (a)
    {
        if (a % 10 == b)
            return (1);
        a /= 10;
    }
    return (0);
}

void    niouf_plouf(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (multiple(7, i) && contient(i, 7))
            printf("Niouf Plouf\n");
        else if (multiple(i, 7))
            printf("Niouf\n");
        else if (contient(i, 7))
            printf("Plouf\n");
        else
            printf("%d\n", i);
    }
}

int     main(int argc, char **argv)
{
    (void)argc;
    niouf_plouf(atoi(argv[1]));
}
