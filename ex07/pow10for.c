#include <stdio.h>
#include <stdlib.h>

int pow10for(int n)
{
    int res;

    res = 1;
    for (int x = 0; x < n; x++)
    {
        res = res * 10;
    }
    return (res);
}