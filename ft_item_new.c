/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_item_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:23:36 by aguemazi          #+#    #+#             */
/*   Updated: 2022/04/12 16:01:23 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_item	*ft_item_new(t_item *stack, int value)
{
	t_item	*new;

	new = malloc(sizeof(t_item));
	new->value = value;
	new->next = stack;
	stack = new;
	return (stack);
}
