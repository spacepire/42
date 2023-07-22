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

void	ft_sort_int_tab(int *tab, int size)
{
	int i;                           
	int j;                          
	int swap;                        

	i = 0;                             
	while (i < size - 1)              
	{
		j = 0;                          
		while (j < (size - i - 1))     
		{
			if (tab[j] > tab[j + 1])    
			{
				swap = tab[j];          
				tab[j] = tab[j + 1];  
				tab[j + 1] = swap;      
			}
			j++;                       
		}
		i++;                            
	}
}

void	ft_put_Arr_int(int *num, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putnbr(num[i]);
		if(i < n - 1)
		{
			ft_putchar(' ');
		}
		if(i == n - 1)
			ft_putchar('\n');
		i++;
	}
}


int 	main(void)
{
	int i[] = {5,4,3,2,1,60,43,12};   

	ft_sort_int_tab(i, 8);           

	ft_put_Arr_int(i,8);              
	return (0);
}
