/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odasdemi <odasdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:16:09 by odasdemi          #+#    #+#             */
/*   Updated: 2023/08/02 01:50:30 by odasdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_putnbr_base_v2(int nbr, char *base, char *nbrf);
int		lenght_nbr(int nbr, char *base, int lenght);

int	ft_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int	ft_baselen(char *base)
{
	int	size;

	size = -1;
	while (base[++size])
		if (base[size] == '+' || base[size] == '-' || base[size] == ' '
			|| ft_in_base(base[size], base + size + 1) >= 0
			|| (base[size] >= 9 && base[size] <= 13))
			return (0);
	return (size);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	n;
	int	negative;
	int	size;

	size = ft_baselen(base);
	if (size < 2)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	negative = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			negative = 1 - negative;
	n = 0;
	i = ft_in_base(*str, base);
	while (i >= 0)
	{
		n = n * size + i;
		str++;
		i = ft_in_base(*str, base);
	}
	if (negative)
		n *= -1;
	return (n);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*finalnbr;
	int		atoinbr;
	int		lenght_nbrf;
	char	*d;

	atoinbr = ft_baselen(base_to);
	lenght_nbrf = ft_baselen(base_from);
	if (atoinbr == 0 || lenght_nbrf == 0)
		return (0);
	atoinbr = ft_atoi_base(nbr, base_from);
	lenght_nbrf = lenght_nbr(atoinbr, base_to, 0);
	finalnbr = (char *)malloc(sizeof(char) * (lenght_nbrf + 1));
	d = finalnbr;
	if (!d)
		return (0);
	ft_putnbr_base_v2(atoinbr, base_to, finalnbr);
	finalnbr[lenght_nbrf] = '\0';
	return (finalnbr);
}
