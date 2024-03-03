/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:42:53 by aguemazi          #+#    #+#             */
/*   Updated: 2022/05/30 19:35:52 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(const int argc, const char **argv)
{
	t_item	*a;
	t_item	*b;
	int		max_value;
	int		nb_value;

	a = NULL;
	b = NULL;
	if (!ft_verif_list(argc, argv) || !ft_verif_size_int(argc, argv))
	{
		ft_printf("erreur, liste non valide, doublon ou valeur non valide");
		return (0);
	}
	a = ft_insert_nbr(argc, argv, a);
	if (!a || !ft_verif_doublon_stack(a, &nb_value))
	{
		ft_printf("erreur, liste non valide, doublon ou valeur non valide");
		return (0);
	}
	a = ft_simply_nbr(a);
	max_value = ft_stack_max(a);
	a = ft_sort_item(a, b, nb_value, max_value);
	ft_clear_list(a);
	return (0);
}
