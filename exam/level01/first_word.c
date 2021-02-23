#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (*argv[i] && (*argv[i] == ' ' || *argv[i] == '\t'))
			argv[i]++; 
		while (*argv[i] != '\0' && (*argv[i] != ' ' || *argv[i] != '\t' ))
			write (1, argv[i]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
