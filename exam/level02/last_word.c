#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		while (*argv[argc - 1] && (*argv[argc - 1] == ' ' || *argv[argc - 1] == '\t'))
			--argv[argc - 1];
		while (*argv[argc - 1] != '\0' && (*argv[argc - 1] != ' '|| *argv[argc - 1] != '\t'))
		{
			while(*argv[argc-1] != '\0')
			{
				ft_putchar(*argv[argc-1]);
				argv[argc-1]++;
			}
			
		}
	}
	ft_putchar('\n');
	return (0);
}
