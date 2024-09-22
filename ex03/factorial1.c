#include <stdio.h>
#include <stdlib.h>

int factoriel1(int n)
{
    int res;

    res = 1;
    for (int x = 1; x <= n; ++x)
    {
        res *= x;
    }
    return (res);
}

int main(int argc, char **argv)
{
    for (int x = 0; x <= 15; ++x)
        printf("%d\n", factoriel1(x));
}