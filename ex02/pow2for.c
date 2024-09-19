#include <stdio.h>
#include <stdlib.h>

int pow2for(int n)
{
    int res;

    res = 1;
    for (x = 0; x < n; x++)
    {
        res = res * 2;
        x++;
    }
}

