#include <stdio.h>
#include <stdlib.h>

int pow2for(int n)
{
    int res;

    res = 1;
    for (int x = 0; x < n; x++)
    {
        res = res * 2;
    }
    return (res);
}

int main(int argc, char **argv)
{
    printf("%d\n", pow2for(atoi(argv[1])));
}