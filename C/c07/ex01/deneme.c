int		*ft_range(int min, int max)
{
	int i;
	int *arr;

	i = 0;
	if (max < min || !(arr = (int *)malloc(sizeof(int) * (max - min) + 1)))
		return (0);
	while (min <= max)
		arr[i++] = min++;
	return (arr);
}