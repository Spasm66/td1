#include <stdio.h>
#include <stdlib.h>

void    equation(void)
{
    for (int x = 0; x <= 143; x++)
    {
        for (int y = 0; y <= 100; y++)
        {
            if (x * x - 2 * (y * y) == 1)
                printf("x = %d \t y = %d\n", x, y);
        }
    }
}

int     main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    equation();
}