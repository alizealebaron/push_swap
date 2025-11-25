/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebaron <alebaron@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:21:00 by alebaron          #+#    #+#             */
/*   Updated: 2025/11/24 15:32:05 by alebaron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sort_tree(t_stack **stacka);
static void	sort_five(t_stack **stacka, t_stack **stackb, int size);
static void	sort_all(t_stack **stacka, t_stack **stackb, int size);
static int	get_nb_bits(int nb);

void	sort_stack(t_stack **stacka, t_stack **stackb)
{
	int	size;

	size = stack_size(*stacka);
	if (check_sort(*stacka))
		return ;
	if (size <= 3)
		sort_tree(stacka);
	else if (size <= 5)
		sort_five(stacka, stackb, size);
	else
		sort_all(stacka, stackb, size);
}

static void	sort_five(t_stack **stacka, t_stack **stackb, int size)
{
	while (size--)
	{
		if ((*stacka)->index == 0 || (*stacka)->index == 1)
			push_pb(stacka, stackb);
		else
			rotate_ra(stacka);
	}
	sort_tree(stacka);
	push_pa(stacka, stackb);
	push_pa(stacka, stackb);
	if ((*stacka)->index > (*stacka)->next->index)
		swap_sa(stacka);
}

static void	sort_tree(t_stack **stacka)
{
	int	big_one;

	big_one = find_big_one(*stacka)->index;
	if ((*stacka)->index == big_one)
		rotate_ra(stacka);
	else if ((*stacka)->next->index == big_one)
		rotate_rra(stacka);
	if ((*stacka)->index > (*stacka)->next->index)
		swap_sa(stacka);
}

static void	sort_all(t_stack **stacka, t_stack **stackb, int size)
{
	int	max;
	int	max_bits;
	int	i;
	int	j;

	max = size - 1;
	max_bits = get_nb_bits(max);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j <= max)
		{
			if (((*stacka)->index >> i) & 1)
				rotate_ra(stacka);
			else
				push_pb(stacka, stackb);
			j++;
		}
		while (*stackb)
			push_pa(stacka, stackb);
		i++;
	}
}

static int	get_nb_bits(int nb)
{
	int	max_bits;

	max_bits = 0;
	while (nb >> max_bits)
	{
		max_bits++;
	}
	return (max_bits);
}
