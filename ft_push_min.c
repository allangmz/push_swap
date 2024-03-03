/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:36:02 by aguemazi          #+#    #+#             */
/*   Updated: 2022/04/26 13:46:11 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_indice_min(t_item *a, t_item *min)
{
	int		i;
	t_item	*temp;

	temp = a;
	i = 0;
	while (temp && temp->value != min->value)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

void	ft_push_min(t_item **a, t_item **b, int nb_value)
{
	t_item	*temp;
	int		indice_min;

	temp = ft_find_min(*a);
	indice_min = ft_indice_min(*a, temp);
	if (indice_min < nb_value / 2 + 1)
	{
		while (*a != temp)
		{
			ra(a);
			ft_printf("ra\n");
		}
	}
	else
	{
		while (*a != temp)
		{
			rra(a);
			ft_printf("rra\n");
		}
	}
	pb(b, a);
	ft_printf("pb\n");
	return ;
}
