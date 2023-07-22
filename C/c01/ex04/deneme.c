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

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;                 

	temp = *a;                    
	*a = *a / *b;                  
	*b = temp % *b;                 
}

int		main(void)
{
	int		i;                   
	int		t;                    

	i = 452;                      
	t = 88;                         
	ft_ultimate_div_mod(&i, &t);    

	ft_putnbr(i);              
	ft_putchar(' ');     
	ft_putnbr(t);             
	ft_putchar('\n');              

	return (0);
}