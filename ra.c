/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:18:36 by aguemazi          #+#    #+#             */
/*   Updated: 2022/04/12 09:55:25 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_item **a)
{
	t_item	*temp;
	t_item	*last;

	if (!*a)
		return ;
	temp = (*a)->next;
	last = *a;
	while (last->next)
		last = last->next;
	last->next = *a;
	(*a)->next = NULL;
	*a = temp;
	return ;
}
