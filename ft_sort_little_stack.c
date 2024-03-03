/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_little_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:37:41 by aguemazi          #+#    #+#             */
/*   Updated: 2022/04/26 16:27:33 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_stack(t_item **a)
{
	sa(a);
	ft_printf("sa\n");
	rra(a);
	ft_printf("rra\n");
}

void	ft_sort_little_stack2(t_item **a)
{
	if ((*a)->value > (*a)->next->value
		&& (*a)->next->value < (*a)->next->next->value
		&& (*a)->value > (*a)->next->next->value)
	{
		ra(a);
		ft_printf("ra\n");
	}
	else if ((*a)->value < (*a)->next->value
		&& (*a)->next->value > (*a)->next->next->value)
	{
		rra(a);
		ft_printf("rra\n");
	}
	else if ((*a)->value > (*a)->next->value
		&& (*a)->next->value < (*a)->next->next->value)
	{
		sa(a);
		ft_printf("sa\n");
	}
}

t_item	*ft_sort_little_stack(t_item **a, t_item **b, int nb_value)
{
	if ((*a) && (*a)->next)
	{
		while ((*a)->next->next->next)
			ft_push_min(a, b, nb_value);
		if ((*a)->value < (*a)->next->value
			&& (*a)->next->value > (*a)->next->next->value
			&& (*a)->value < (*a)->next->next->value)
		{
			rra(a);
			ft_printf("rra\n");
			sa(a);
			ft_printf("sa\n");
		}
		else if ((*a)->value > (*a)->next->value
			&& (*a)->next->value > (*a)->next->next->value)
			ft_reverse_stack(a);
		else
			ft_sort_little_stack2(a);
		while (*b)
		{
			pa(a, b);
			ft_printf("pa\n");
		}
	}
	return (*a);
}
