#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		icheck(char s)
{
	int		i;
	
	if (s >= 'a' && s <= 'z')
		i = s - 'a' + 1;
	else if (s >= 'A' && s <= 'Z')
		i = s - 'A' + 1;
	else
		i = 1;
	return (i);
}

int		main(int argc, char **argv)
{
	int		i;

	if (argc == 2)
	{
		while (*argv[1])
		{ 	
			i =  icheck(*argv[1]);
			while (i--)
			{
				ft_putchar(*argv[1]);
				argv[i]++;
			}
		}	

	}
	ft_putchar('\n');
}
