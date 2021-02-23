#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		rotone(char c)
{
	if ((c >= 'A' && c <= 'Y') || (c >= 'a' && c <= 'y'))
		c += 1;
	else if (c == 'z')
		c = 'a';
	else if (c == 'Z')
		c = 'A';
	return (c);
}

int		main(int argc, char **argv)
{
	if	(argc == 2)
	{
		while (*argv[1])
			ft_putchar(rotone(*argv[1]++));
	}
	ft_putchar('\n');
	return (0);
}