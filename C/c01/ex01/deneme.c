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

void	ft_ultimate_ft(int *********nbr)    
{
	*********nbr = 42;                     
}

int		main(void)
{
	int		*********i;     
	int		********q;		
	int		*******w;
	int		******e;
	int		*****r;
	int		****t;
	int		***y;
	int		**u;
	int 	*Point;         
	int 	num;           
	i = &q;                
	q = &w;
	w = &e;
	e = &r;
	r = &t;
	t = &y;
	y = &u;
	u = &Point;
	Point = &num;

	num = 21;                

	ft_ultimate_ft(i);      

	ft_putnbr(num);         

	return (0);
}