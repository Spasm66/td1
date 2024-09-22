#include <stdio.h>
#include <stdlib.h>

int pow2while(int n)
{
    int res;
    int x;

    res = 1;
    x = 0;
    while (x < n)
    {
        res = res * 2;
        x++;
    }
    return (res);
}

int main(int argc, char **argv)
{
    printf("%d\n", pow2while(atoi(argv[1])));
}