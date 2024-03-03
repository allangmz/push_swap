/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:35:03 by aguemazi          #+#    #+#             */
/*   Updated: 2022/04/26 15:34:55 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_item	*ft_find_min(t_item *a)
{
	t_item	*temp;
	t_item	*min;

	min = a;
	temp = min;
	while (temp)
	{
		if (min->simpl_value > temp->simpl_value)
			min = temp;
		temp = temp->next;
	}
	return (min);
}
