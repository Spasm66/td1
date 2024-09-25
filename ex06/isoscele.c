#include <stdio.h>
#include <stdlib.h>

void    printer(int space, int nb_star)
{
    for (int i = 0; i < space - 1; i++)
        printf(" ");
    for (int j = 0; j < nb_star; j++)
        printf("*");
}

void    isoscele(int n)
{
    int nb_base_star;
    int nb_star;

    nb_base_star = 1;
    nb_star = 1;
    for (int x = 0; x < n; x++)
        nb_base_star += 2;
    for (int i = nb_base_star / 2; i > 0; i--)
    {
        printer(i, nb_star);
        printf("\n");
        nb_star += 2;
    }
}

int     main(int argc, char **argv)
{
    (void)argc;
    isoscele(atoi(argv[1]));
}