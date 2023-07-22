/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odasdemi <odasdemi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:52:20 by odasdemi          #+#    #+#             */
/*   Updated: 2023/07/13 12:52:22 by odasdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_combn(int n)
{
	char	t[11];
	int		i;

	if (n < 1 || n > 9)
	{
	    return ;
	}
	*t = '0';
	i = 0;
	while (++i < n)
	{
	    t[i] = t[i - 1] + 1;
	}
	t[n] = ',';
	t[n + 1] = ' ';
	while (*t <= 58 - n)
	{
		write(1, t, n + ((*t != 58 - n) ? 2 : 0));
		i = n;
		while (i--)
		{
		    if (++t[i] <= 58 - n + i)
		    {
		        break ;
		    }
		}
		while (++i > 0 && i < n)
		{
		    t[i] = t[i - 1] + 1;
		}
	}
}

int main(void)
{
    int x;
    
    x = 4;
    
    ft_print_combn(x);
}