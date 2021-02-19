#include <stdio.h>

int		fct(char c)
{
	printf("%c\n", c);
	return (0);
}

int		main(void)
{
	int		(*ptr)(char);

	ptr = &fct;
	(*ptr)('o');
	return (0);
}
