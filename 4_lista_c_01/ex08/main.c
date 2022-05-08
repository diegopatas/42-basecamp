#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int    main(void)
{
    int    table[12] = {-2, 7, -1, 0, 5, 4, 15, -4, 1, 12, 8, 9};
    int    tabsize;
    int    i;

    tabsize = 12;
    for (i = 0; i < tabsize; i++)
        printf("%d ", table[i]);
    printf("\n");
    ft_sort_int_tab(&table[0], tabsize);
    for (i = 0; i < tabsize; i++)
        printf("%d ", table[i]);
    printf("\n");
}