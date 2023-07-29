int		ft_sqrt(int nb)
{
	int		sqr;

	sqr = 1;
	while ((sqr * sqr) < nb)
		sqr += 1;
	if ((sqr * sqr) == nb)
		return (sqr);
	return (0);
}