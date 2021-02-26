#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		xxx(char c)
{
	char	index;

	index = 0;
	if (c >= 'a' && c <= 'z')
			{
				index = c - 32;
				return (index);
			}
			else if (c >= 'A' && c <= 'Z')
			{
				index = c + 32;
				return (index);
			}
			else 
				c = 1;
				return (index);
}

int		main(int argc, char **argv)
{
	int		i;
	char index;
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{	
			index = xxx(argv[1][i]);
			ft_putchar(index);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}