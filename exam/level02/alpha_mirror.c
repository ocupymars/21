#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_alpha_mirror(int c)
{
	return(c = (c >= 'A' && c<= 'Z') ? 'Z' - (c - 'A') : 'z' - (c - 'a'));
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		while(*argv[1])
		{
			if ((*argv[1]))
				ft_putchar(ft_alpha_mirror(*(argv[1]++)));
			else
				ft_putchar(*argv[1]++);
		}
	}
	write(1, "\n", 1);
	return (0);
}
