/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebaron <alebaron@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:21:42 by alebaron          #+#    #+#             */
/*   Updated: 2025/11/19 15:24:42 by alebaron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	rotate_stack(t_stack **first);

void	rotate_ra(t_stack **stack)
{
	rotate_stack(stack);
	write(1, "ra\n", 3);
}

void	rotate_rb(t_stack **stack)
{
	rotate_stack(stack);
	write(1, "rb\n", 3);
}

void	rotate_rr(t_stack **stacka, t_stack **stackb)
{
	rotate_stack(stacka);
	rotate_stack(stackb);
	write(1, "rr\n", 3);
}

static void	rotate_stack(t_stack **first)
{
	t_stack	*tmp;
	t_stack	*last;

	if (*first == NULL || (*first)->next == NULL)
		return ;
	tmp = *first;
	*first = (*first)->next;
	last = stack_last(*first);
	tmp->next = NULL;
	last->next = tmp;
}
