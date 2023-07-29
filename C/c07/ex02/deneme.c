#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
		return (-1);
	if ((*range = (int *)malloc(sizeof(int) * (max - min))) == ((void *)0))
		return (-1);
	i = 0;
	while (min < max)
		*range[i++] = min++;
	return (i);
	return (0);
}