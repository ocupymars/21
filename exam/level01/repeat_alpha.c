#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		icheck(char c)
{
	int index;

    if (c >= 'a' && c <= 'z')
    {
         index = c - 'a' + 1;
        return (index);
    }
    if  (c >= 'A' && c <= 'Z')
    {
        index = c - 'A' + 1;
        return (index);
    }
    else
        c = 1;
       return (1);
 }

int		main(int argc, char **argv)
{
	int		index;
	int		i;

	i = 0;
 	if (argc == 2)
		while (argv[1][i])
		{ 	
			index =  icheck(argv[1][i]);
			while (index--)
			{
				ft_putchar(argv[1][i]);
			i++;
			}
		}
	write(1, "\n", 1);
	return (0);
}
