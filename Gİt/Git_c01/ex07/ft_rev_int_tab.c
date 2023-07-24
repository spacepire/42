/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odasdemi <odasdemi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 00:16:01 by odasdemi          #+#    #+#             */
/*   Updated: 2023/07/24 00:16:01 by odasdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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