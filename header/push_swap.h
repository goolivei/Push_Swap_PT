/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goolivei <goolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:22:40 by goolivei          #+#    #+#             */
/*   Updated: 2024/04/24 13:07:41 by goolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <stdbool.h>
# include "../libft_goolivei/libft.h"

typedef struct s_stack_n
{
	int				value;
	int				index;
	int				push_cost;
	bool			above_median;
	bool			cheapest;
	struct s_stack_n	*target_node;
	struct s_stack_n	*prev;
	struct s_stack_n	*next;
}	t_stack_n;

t_stack_n	*ft_lstlast2(t_stack_n *lst);
void		sort_stacks(t_stack_n **a, t_stack_n **b);
void		init_stack_a(t_stack_n **a, char **agrv);
int			error_syntax(char *strn);
int			error_duplicate(t_stack_n *a, int n);
void		free_errors(t_stack_n **a);
void		free_stack(t_stack_n **stack);
bool		stack_sorted(t_stack_n *stack);
int			stack_len(t_stack_n *stack);
void		sa(t_stack_n **a, bool print);
void		sb(t_stack_n **b, bool print);
void		ss(t_stack_n **a, t_stack_n **b, bool print);
void		ra(t_stack_n **a, bool print);
void		rb(t_stack_n **b, bool print);
void		rr(t_stack_n **a, t_stack_n **b, bool print);
t_stack_n	*find_max(t_stack_n *stack);
t_stack_n	*find_min(t_stack_n *stack);
t_stack_n	*get_cheapest(t_stack_n *stack);
void		sort_three(t_stack_n **a);
void		pa(t_stack_n **a, t_stack_n **b, bool print);
void		pb(t_stack_n **b, t_stack_n **a, bool print);
void		init_nodes_a(t_stack_n *a, t_stack_n *b);
void		init_nodes_b(t_stack_n *a, t_stack_n *b);
void		current_index(t_stack_n *stack);
void		prep_for_push(t_stack_n **stack, t_stack_n *top_node, char stack_name);
void		rra(t_stack_n **a, bool print);
void		rrb(t_stack_n **b, bool print);
void		rrr(t_stack_n **a, t_stack_n **b, bool print);
void		idk(char **argv);
void		initialize_cheapest(t_stack_n *stack);

#endif
