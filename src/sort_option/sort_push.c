/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebaron <alebaron@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:21:36 by alebaron          #+#    #+#             */
/*   Updated: 2025/11/19 16:12:30 by alebaron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	push_stack(t_stack **stack1, t_stack **stack2);

void	push_pa(t_stack **stacka, t_stack **stackb)
{
	push_stack(stackb, stacka);
	write(1, "pa\n", 3);
}

void	push_pb(t_stack **stacka, t_stack **stackb)
{
	push_stack(stacka, stackb);
	write(1, "pb\n", 3);
}

static void	push_stack(t_stack **stack1, t_stack **stack2)
{
	t_stack	*tmp;

	if (stack1 == NULL || *stack1 == NULL)
		return ;
	tmp = *stack1;
	*stack1 = (*stack1)->next;
	stack_add_front(stack2, tmp);
}
