#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pow10for(int n);

int nb_len(int n)
{
    int c;

    c = 0;
    while (n / 10)
    {
        n /= 10;
        c++;
    }
    return (c + 1);
}

long    reverse(long n)
{
    long res;
    int l;

    l = nb_len(n);
    res = 0;
    for (int x = l; x > 0; x--)
    {
        res += (n % 10) * pow10for(x - 1);
        n = n / 10;
    }
    return (res);
}

void   binary(int nb)
{
    long    temp;

    temp = 9;
    while (nb)
    {
        temp = temp * 10 + nb % 2;
        nb /= 2;
    }
    printf("%ld\n", (reverse(temp) / 10));
}


int     main(int argc, char **argv)
{
    (void)argc;
    binary(atoi(argv[1]));
}