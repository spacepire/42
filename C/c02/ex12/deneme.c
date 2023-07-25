void		ft_putchar(char c)
{
	write(1, &c, 1);
}


void 	ft_print_address(int nbr, char *hex)
{
	int		add[9];											
	int 	i;
	int		j;
	int 	base_type;

	i = 0;
	j = 8; 
	base_type = 16;
	if(nbr == 0)
	{
		while(j-- > 0)
			ft_putchar('0');
	}
	else
	{
		while (nbr)
		{
			add[i] = nbr % base_type;
			nbr /= base_type;
			i++;
		}
		j = (8 - i);
		while(j-- > 0)
			ft_putchar('0');
		while (i > 0)
			ft_putchar(hex[add[--i]]);
	}
	ft_putchar(':');
	ft_putchar(' ');
}


void	ft_print_hex(int i, unsigned int size, unsigned char *p, char *hex)
{
	unsigned int	j;

	j = 0;
	while ((j < 16) && (i + j < size))
	{
		ft_putchar((char)hex[(*(p + i + j) / 16) % 16]);
		ft_putchar((char)hex[*(p + i + j) % 16]);
		if (j % 2)										
			ft_putchar(' ');
		j++;
	}
	while (j < 16)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if (j % 2)
			ft_putchar(' ');
		j++;
	}
}


 void	ft_print_char(int i, unsigned int size, unsigned char *p)
 {	
	unsigned int	j;

	j = 0;
	while ((j < 16) && (i + j < size))
	{
		if (*(p + i + j) >= 32 && *(p + i + j) <= 126)
			ft_putchar((char)*(p + i + j));
		else
			ft_putchar('.');
		j++;
	}
 }


void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*p;
	char			*hex;

	i = 0;
	p = (unsigned char *)addr;
	hex = "0123456789abcdef";
	while (i < size)
	{
		ft_print_address(i, hex);
		ft_print_hex(i, size, p, hex);
		ft_print_char(i, size, p);
		ft_putchar('\n');
		i += 16;
	}
	return (addr + i);
}
