#include <stdio.h>
#include <stdlib.h>

char    *ft_strrev(char *str)
{
	int        len;
	int        i;
	char    c;

	len = 0;
	while (str[len])
		len += 1;
	i = -1;
	while (++i < --len)
	{
		c = str[i];
		str[i] = str[len];
		str[len] = c;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
  char		*str2;
  //int		i;
  //char		str1[];
  
  str2 = ((char *)malloc(sizeof(char) * 10));
  
  str2 = "fire";
  //i = 0;
  ft_strrev(str2);
  printf("%s\n", str2);
  
  free(str2);
}