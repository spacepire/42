#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_put_arr_int(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	char	temp;

	i = -1;
	while (++i < --size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
	}
}

int		main(void)
{
	int	tab[] = {1,2,3,4,5};		

	ft_rev_int_tab(tab, 5);			
									
	ft_put_arr_int(tab, 5);			
	ft_putchar('\n');				

	return (0);
}