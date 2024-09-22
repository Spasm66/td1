#include <stdio.h>
#include <stdlib.h>

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

int reverse(int n)
{
    
    int res;
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

int main(int argc, char **argv)
{
    int r;

    r = reverse(atoi(argv[1]));
    printf("%d\n", r);
}