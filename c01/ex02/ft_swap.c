/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odasdemi <odasdemi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:22:36 by odasdemi          #+#    #+#             */
/*   Updated: 2023/07/17 11:25:11 by odasdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	min;

	min = -2147483648;
	if (nb == min)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int		main(void)
{
	int		i;                      
	int		t;

	i = 21;                         
	t = 42;                         

	ft_putnbr(i);                 
	ft_putchar(' ');               
	ft_putnbr(t);                   
	ft_putchar('\n');               


	ft_swap(&i, &t);                

	ft_putnbr(i);                   
	ft_putchar(' ');                
	ft_putnbr(t);                   
	ft_putchar('\n');               

	return (0);
}
