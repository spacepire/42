/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odasdemi <odasdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 01:46:46 by odasdemi          #+#    #+#             */
/*   Updated: 2023/07/27 04:28:12 by odasdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	x;
	int total;
	int is_negative;

	is_negative = 0;
	x = 0;
	total = 0;
	while (str[x] == ' ' || str[x] == '\n' || str[x] == '\r' || str[x] == '\f'
			|| str[x] == '\t' || str[x] == '\v' || str[x] == '+')
		x++;
	if (str[x] == '-')
	{
		is_negative = 1;
		x++;
	}
	while ((str[x] == '-') || (str[x] == '+'))
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		total *= 10;
		total += ((int)str[x] - 48);
		x++;
	}
	if (is_negative)
		return (-total);
	else
		return (total);
}