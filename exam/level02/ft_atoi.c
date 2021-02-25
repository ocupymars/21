#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int		i;
	int		nbr;
	int		znak;

	nbr = 0;
	znak = 1;
	i = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') ||
			(str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			znak *= -1;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr = nbr * 10 + (int)str[i] - '0';
		i++;
	}
	return (znak * nbr);
}

int		main(void)
{
	char c[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";
	printf("%d\n", ft_atoi(c));
}
