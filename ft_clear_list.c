/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:46:40 by aguemazi          #+#    #+#             */
/*   Updated: 2022/04/25 14:48:25 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_clear_list(t_item *stack)
{
	t_item	*tmp;

	while (stack)
	{
		tmp = stack;
		stack = tmp->next;
		free(tmp);
	}
	return ;
}
