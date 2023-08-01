#include <stdlib.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size)
	{
	    j += ft_strlen(strs[i]);
	    i++;
	}
	if (size > 0)
		j += (size - 1) * ft_strlen(sep);
	dest = malloc((j + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(dest + j, strs[i]);
		j += ft_strlen(strs[i]);
		if (++i < size)
			j += dest + j + ft_strlen(sep) - ft_strcpy(dest + j, sep);
	}
	dest[j] = '\0';
	return (dest);
}
#include <stdio.h>
int	main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}