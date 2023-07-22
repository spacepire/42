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
	int t;

	t = *a;
	*a = *b;
	*b = t;
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