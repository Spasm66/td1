#include <stdio.h>
#include <stdlib.h>

int pow2dowhile(int n)
{
    int res;
    int x;

    res = 1;
    x = 0;
    do 
    {
        res = res * 2;
        x++;
    } while (x < n);
    return (res);
}

int main(int argc, char **argv)
{
    printf("%d\n", pow2dowhile(atoi(argv[1])));
}