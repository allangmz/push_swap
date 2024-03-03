/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:29:02 by aguemazi          #+#    #+#             */
/*   Updated: 2022/04/25 15:29:03 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_item	*ft_insert_nbr(int argc, const char **argv, t_item	*a)
{
	int		i;
	int		j;
	char	**tab2d_char;

	i = argc - 1;
	while (i >= 1)
	{
		tab2d_char = ft_split(argv[i], ' ');
		if (!tab2d_char[0])
			return (NULL);
		j = 0;
		while (tab2d_char[j])
			j++;
		j--;
		while (j >= 0)
		{
			a = ft_item_new(a, ft_atoi(tab2d_char[j]));
			free (tab2d_char[j]);
			a->simpl_value = -1;
			j--;
		}
		free(tab2d_char);
		i--;
	}
	return (a);
}
