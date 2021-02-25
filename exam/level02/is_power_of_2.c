#include <stdio.h>

int		is_power_of_two(unsigned int n)
{
	if (n == 0)
	 return (0);
	while (n % 2 == 0)
		n /= 2;
	return ((n == 1) ? 1 : 0);
}

int		main()
{
	printf("%d\n", is_power_of_two(30));
}
