#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		c;

	c = *a;
	*a = *b;
	*b = c;
	printf("num = %d\n", *a);
	printf("ber = %d\n", *b);
}

int		main(void)
{
	int		num;
	int		ber;

	num = 1;
	ber = 2;
	ft_swap(&num, &ber);
	return (0);
}
