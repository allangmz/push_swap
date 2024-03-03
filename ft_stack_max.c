/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_max.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:32:09 by aguemazi          #+#    #+#             */
/*   Updated: 2022/04/25 14:32:13 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_max(t_item *a)
{
	int		max_value;
	t_item	*temp;

	temp = a;
	max_value = a->simpl_value;
	while (temp->next)
	{
		if (temp->simpl_value > max_value)
			max_value = temp->simpl_value;
		temp = temp->next;
	}
	return (max_value);
}
