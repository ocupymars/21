#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int		j;
	
	if (argc == 2)
	{
		j = ft_strlen(argv[1]);
		while (j--)
		{		
			ft_putchar(argv[1][j]);
		}
	}
	ft_putchar('\n');
	return (0);
}
