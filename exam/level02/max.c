#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int max;

    while (!len)
        return (0);
    max = tab[--len];
    while (len--)
        if (tab[len] > max)
            max = tab[len];
        return (max);
}

int     main()
{
    int tab[7] = {11,24, 15, 6, 3};
    printf("%d\n", max(tab, 5));
}
