#include <unistd.h>

void	ft_putstr(char *str)			
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	write(1, str, i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;						

	i = 0;									
	while ((src[i] != '\0') && (i < n))		
	{
		dest[i] = src[i];				
		i++;							
	}
	while ((dest[i] != '\0') && (i < n))	
	{
		dest[i] = '\0';						
		i++;								
	}
	return (dest);							
}


int 	main(void)
{
	char	r[] = {"abc.abc.abc.abc"};	
	char	t[20];							
	char	*p;								
	p = ft_strncpy(t, r, 20);		

	ft_putstr(p);					
	return (0);						
}