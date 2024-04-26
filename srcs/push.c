/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goolivei <goolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:40:28 by goolivei          #+#    #+#             */
/*   Updated: 2024/04/26 13:04:04 by goolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void	push(t_stack_n **dst, t_stack_n **src)
{
	t_stack_n	*push_n;

	if (!*src)
		return ;
	push_n = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	push_n->prev = NULL;
	if (!*dst)
	{
		*dst = push_n;
		push_n->next = NULL;
	}
	else
	{
		push_n->next = *dst;
		push_n->next->prev = push_n;
		*dst = push_n;
	}
}

void	pa(t_stack_n **a, t_stack_n **b, bool print)
{
	push(a, b); 
	if (!print) 
		ft_printf("pa\n");
}

void	pb(t_stack_n **b, t_stack_n **a, bool print)
{
	push(b, a); 
	if (!print) 
		ft_printf("pb\n");
}
