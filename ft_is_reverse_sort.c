/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_reverse_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:01:08 by aguemazi          #+#    #+#             */
/*   Updated: 2022/04/26 14:01:51 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_reverse_sort(t_item *a)
{
	t_item	*temp;

	temp = a;
	while (temp && temp->next)
	{
		if (temp->simpl_value < temp->next->simpl_value)
		{
			return (0);
		}
		temp = temp->next;
	}
	return (1);
}
