/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebaron <alebaron@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:24:08 by alebaron          #+#    #+#             */
/*   Updated: 2025/11/19 16:11:38 by alebaron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	swap_stack(t_stack **stack);

void	swap_sa(t_stack **stack)
{
	swap_stack(stack);
	write(1, "sa\n", 3);
}

void	swap_sb(t_stack **stack)
{
	swap_stack(stack);
	write(1, "sb\n", 3);
}

void	swap_ss(t_stack **stacka, t_stack **stackb)
{
	swap_stack(stacka);
	swap_stack(stackb);
	write(1, "ss\n", 3);
}

static void	swap_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->next = *stack;
	*stack = tmp;
}
