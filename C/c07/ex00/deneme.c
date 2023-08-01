#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	new = malloc(sizeof(*src));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/* bir diziyi hafizada dinamik olarak kopyasını oluşturmak için kullanılır
 ve ana dizine bir şey olmaz lakin oluşturulan diziyi sonradan free ile 
 serbest bırakmak lazım yoksa belleği sürekli sömürür.
*/