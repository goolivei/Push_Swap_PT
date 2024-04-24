/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goolivei <goolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:38:34 by goolivei          #+#    #+#             */
/*   Updated: 2024/04/22 17:17:46 by goolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int	error_syntax(char *strn)
{
	if (!(*strn == '+' || *strn == '-' || (*strn >= '0' && *strn <= '9')))
		return (1);
	if (strn[1] && !(*strn == '+' || *strn == '-') && !(strn[1] >= '0' && strn[1] <= '9'))
	{
		ft_printf("strn: %s\n", strn);
		return (1);
	}
	while (*++strn)
	{
		if (!(*strn >= '0' && *strn <= '9'))
		{
			return (1);
		}
	}
	return (0);
}

int	error_duplicate(t_stack_n *a, int n)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->value == n)
			return (1);
		a = a->next;
	}
	return (0);
}

void	free_stack(t_stack_n **stack)
{
	t_stack_n	*tmp;
	t_stack_n	*current;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		current->value = 0;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

void	free_errors(t_stack_n **a)
{
	free_stack(a);
	ft_printf("Error\n");
	exit (1);
}
