#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep) 
{
	int		i;
	int		j;
	int		z;
	char	*str;
	int		length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	length += ((size - 1) * ft_strlen(sep));
	if ((str = (char *)malloc(sizeof(char) * (length + 1))) == ((void *)0))
		return ((void *)0);
	i = 0;
	j = 0;
	while (j < size)
	{
		z = 0;
		while (strs[j][z])
		{
			str[i] = strs[j][z];
			z++;
			i++;
		}
		if ((j + 1) < size)
		{
			z = 0;
			while (sep[z])
			{
				str[i] = sep[z];
				z++;
				i++;
			}
		}
		j++;
	}
	str[i] = '\0';
	return (str);
}