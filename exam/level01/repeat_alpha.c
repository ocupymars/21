#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		icheck(char s)
{
	int		repeat;
	
	if (s >= 'a' && s <= 'z')
		repeat =  s - 'a' + 1;
		//return (repeat);
	else if (s >= 'A' && s <= 'Z') 	
	{
		repeat = s - 'A' + 1;
		//return (repeat);
	}
	else 	
		repeat = 1;
	return  (1);
}

int		main(int argc, char **argv)
{
	int		index;
	//int		i;

	//i = 0;
 	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	
	while (*argv[1])
	{ 	
		index =  icheck(*argv[1]);
		while (index > 0)
		{
			ft_putchar(*argv[1]);
			index--;
		}
		argv[1]++;
	}
	write(1, "\n", 1);
	return (0);
}
