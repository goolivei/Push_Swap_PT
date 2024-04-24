/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:25:22 by goolivei          #+#    #+#             */
/*   Updated: 2024/04/17 16:25:24 by goolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	sort_three(t_stack_n **a)
{
	t_stack_n	*biggest_n;

	biggest_n = find_max(*a);
	if (biggest_n == *a)
		ra(a, false);
	else if ((*a)->next == biggest_n)
		rra(a, false);
	if ((*a)->value > (*a)->next->value)
		sa(a, false);
}