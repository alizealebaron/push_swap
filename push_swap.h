/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebaron <alebaron@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 13:41:03 by alebaron          #+#    #+#             */
/*   Updated: 2025/11/19 16:10:45 by alebaron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}			t_stack;

char	**send_error(int argc, char **to_free);
char	**free_table_string(char **s);
int		check_error(int argc, char **argv);

// Stacks

t_stack	*make_a_stack(int argc, char **argv);
void	init_index(t_stack *stack, int size);
t_stack	*stack_new(int value);
void	stack_add_front(t_stack **lst, t_stack *new);
void	stack_clear(t_stack **head);
void	stack_add_back(t_stack **lst, t_stack *new);
t_stack	*stack_last(t_stack *lst);
int		stack_size(t_stack *lst);
t_stack	*find_little_one(t_stack *stack);
t_stack	*find_big_one(t_stack *stack);
int		check_sort(t_stack *stack);

// Sort

void	sort_stack(t_stack **stacka, t_stack **stackb);

// Sort options

void	swap_sa(t_stack **stack);
void	swap_sb(t_stack **stack);
void	swap_ss(t_stack **stacka, t_stack **stackb);
void	push_pa(t_stack **stacka, t_stack **stackb);
void	push_pb(t_stack **stacka, t_stack **stackb);
void	rotate_ra(t_stack **stack);
void	rotate_rb(t_stack **stack);
void	rotate_rr(t_stack **stacka, t_stack **stackb);
void	rotate_rra(t_stack **stack);
void	rotate_rrb(t_stack **stack);
void	rotate_rrr(t_stack **stacka, t_stack **stackb);

#endif