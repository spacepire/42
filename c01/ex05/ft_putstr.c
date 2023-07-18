void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int 	main(void)
{
	char	t[] = {"Hello\n"}; 
	
	ft_putstr(t);	

	return (0);
}