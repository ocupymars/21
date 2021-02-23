#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{	
			
			if (*argv[1] >= 'a' && *argv[1] <= 'z')
			{
				*argv[1] -= 32;
				ft_putchar(*argv[1]);
			}
			else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
			{
				*argv[1]+= 32;
				ft_putchar(*argv[1]);
			}
			argv[1]++;
		}
	}
	ft_putchar('\n');
	return (0);
}