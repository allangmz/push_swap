/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:04:46 by aguemazi          #+#    #+#             */
/*   Updated: 2022/04/25 16:24:54 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_item **a)
{
	t_item	*temp;
	t_item	*last;

	if (!*a)
		return ;
	temp = (*a)->next;
	last = *a;
	while (last->next)
	{
		temp = last;
		last = last->next;
	}
	last->next = *a;
	*a = last;
	temp->next = NULL;
	return ;
}
