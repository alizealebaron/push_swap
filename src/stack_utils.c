/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebaron <alebaron@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:53:17 by alebaron          #+#    #+#             */
/*   Updated: 2025/11/19 16:04:41 by alebaron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*stack_new(int value)
{
	t_stack	*t;

	t = malloc(sizeof(t_stack));
	if (!t)
		return (NULL);
	t->value = value;
	t->index = 0;
	t->next = NULL;
	return (t);
}

void	stack_add_front(t_stack **lst, t_stack *new)
{
	if (!new)
		return ;
	if (*lst)
		new->next = *lst;
	else
		new->next = NULL;
	*lst = new;
}

void	stack_clear(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
}

void	stack_add_back(t_stack **lst, t_stack *new)
{
	if (*lst)
		stack_last(*lst)->next = new;
	else
		*lst = new;
}

t_stack	*stack_last(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
