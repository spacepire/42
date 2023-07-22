#include <unistd.h>

void	ft_putstr(char *str)			
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	write(1, str, i);
}

int	is_alpha(char c)				
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);				
	if ((c >= 'A') && (c <= 'Z'))	
		return (1);				
	return (0);						
}

int	ft_str_is_alpha(char *str)		
{
	int	i;						
	
	i = 0;						
	while (str[i])				
	{
		if (!(is_alpha(str[i])))	
			return (0);				
		i++;					
	return (1);						
}

int 	main(void)
{
	char	r[] = "welcome_turkey";					
	
    if ((ft_str_is_alpha(r)) == 1)							
		ft_putstr("fgdsfdsafds fdsfdsf fdsfds fdsfsd\n");	
	else								
		ft_putstr("ewqewqf rewrqw rew wq wq edwq\n");		
	
	return (0);
}