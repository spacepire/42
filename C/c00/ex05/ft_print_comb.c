/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odasdemi <odasdemi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 22:26:28 by odasdemi          #+#    #+#             */
/*   Updated: 2023/07/13 22:50:31 by odasdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	c = '0';
	while (c <= '7')
	{
		b = c + 1;
		while (b <= '8')
		{
			a = b + 1;
			while (a <= '9')
			{
				if (a != b && b != c && a != c)
				{
					write(1, &c, 1);
					write(1, &b, 1);
					write(1, &a, 1);
				}
				a++;
			}
			b++;
		}
		c++;
	}
}
