#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*dest;

	length = ft_strlen(src);
	if ((dest = (char*)malloc((length + 1) * sizeof(char*))) == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
	
}

int		main()
{
	char 	*name;

	name = "1000s";
	printf("%s\n", ft_strdup(name));
}
