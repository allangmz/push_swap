/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:35:44 by aguemazi          #+#    #+#             */
/*   Updated: 2022/04/26 14:07:02 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_item **a)
{
	t_item	*temp;

	temp = (*a)->next->next;
	(*a)->next->next = *a;
	(*a)->next->next = *a;
	*a = (*a)->next;
	(*a)->next->next = temp;
	return ;
}
