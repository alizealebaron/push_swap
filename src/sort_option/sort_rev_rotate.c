/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rev_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebaron <alebaron@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:21:39 by alebaron          #+#    #+#             */
/*   Updated: 2025/11/19 16:12:07 by alebaron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	rotate_rev_stack(t_stack **first);

void	rotate_rra(t_stack **stack)
{
	rotate_rev_stack(stack);
	write(1, "rra\n", 4);
}

void	rotate_rrb(t_stack **stack)
{
	rotate_rev_stack(stack);
	write(1, "rrb\n", 4);
}

void	rotate_rrr(t_stack **stacka, t_stack **stackb)
{
	rotate_rev_stack(stacka);
	rotate_rev_stack(stackb);
	write(1, "rrr\n", 4);
}

static void	rotate_rev_stack(t_stack **first)
{
	t_stack	*prev_last;
	t_stack	*new_last;

	if (*first == NULL || (*first)->next == NULL)
		return ;
	prev_last = *first;
	while (prev_last->next != NULL)
	{
		new_last = prev_last;
		prev_last = prev_last->next;
	}
	prev_last->next = *first;
	new_last->next = NULL;
	*first = prev_last;
}
