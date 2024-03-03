/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simply_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:33:48 by aguemazi          #+#    #+#             */
/*   Updated: 2022/04/25 15:29:25 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_assign_simply_nbr(t_item	**a, int size)
{
	int		compt;
	t_item	*min;
	t_item	*temp;

	compt = 1;
	min = *a;
	while (compt <= size)
	{
		temp = min->next;
		while (temp)
		{
			if (min->value > temp->value && temp->simpl_value == -1)
				min = temp;
			temp = temp->next;
		}
		min->simpl_value = compt;
		compt ++;
		min = *a;
		while (min && min->simpl_value != -1)
			min = min->next;
	}
}

t_item	*ft_simply_nbr(t_item	*a)
{
	t_item	*temp;
	int		size;

	size = 0;
	temp = a;
	while (temp)
	{
		temp = temp->next;
		size ++;
	}
	ft_assign_simply_nbr(&a, size);
	return (a);
}
