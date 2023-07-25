/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odasdemi <odasdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 00:37:00 by odasdemi          #+#    #+#             */
/*   Updated: 2023/07/25 20:06:26 by odasdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && (i < size))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
#include <stdio.h>
int main()
{
	unsigned int i;
	i = 20;
	char dest[i];
	char str[] = "helddddddddddlo";
	
	printf("%d\n", ft_strlcpy(dest, str, i));

	printf("%s", dest);
}