/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odasdemi <odasdemi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 00:16:03 by odasdemi          #+#    #+#             */
/*   Updated: 2023/07/24 00:16:03 by odasdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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