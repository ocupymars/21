#include <stdbool.h>

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		index;
	int		size;
	bool	swapped;

	size = 0;
	while (tab[size])
		size++;
	while (true)
	{
		index = 0;
		swapped = false;
		while (index < size - 1)
		{
			if ((*cmp)(tab[index], tab[index + 1]) > 0)
			{
				ft_swap(&tab[index], &tab[index + 1]);
				swapped = true;
			}
			index++;
		}
		if (!swapped)
			break ;
	}
}
