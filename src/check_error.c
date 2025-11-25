/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebaron <alebaron@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:24:27 by alebaron          #+#    #+#             */
/*   Updated: 2025/11/17 12:39:59 by alebaron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	check_alpha(char *str);
static int	check_double(char **str);
static int	count_nbr(char **str);

int	check_error(int argc, char **argv)
{
	int			counter;
	char		**tmp_argv;
	long		tmp_nbr;

	counter = 0;
	if (argc == 2)
		tmp_argv = ft_split(argv[1], ' ');
	else
		tmp_argv = argv + 1;
	while (tmp_argv[counter])
	{
		tmp_nbr = ft_atoi_long(tmp_argv[counter]);
		if (tmp_nbr > INT_MAX || tmp_nbr < INT_MIN)
			send_error(argc, tmp_argv);
		if (check_double(tmp_argv))
			send_error(argc, tmp_argv);
		if (check_alpha(tmp_argv[counter]))
			send_error(argc, tmp_argv);
		counter++;
	}
	if (argc == 2)
		tmp_argv = free_table_string(tmp_argv);
	return (0);
}

static int	check_double(char **str)
{
	int	i;
	int	j;
	int	total;

	total = count_nbr(str);
	i = 0;
	while (i < total)
	{
		j = i + 1;
		while (j < total)
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	count_nbr(char **str)
{
	int	som;

	som = 0;
	while (str[som])
		som++;
	return (som);
}

static int	check_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] == '+') || (str[i] == '-')) && !ft_isdigit(str[i + 1]))
			return (1);
		else if ((!ft_isdigit(str[i])) && (str[i] != '+') && (str[i] != '-'))
			return (1);
		i++;
	}
	return (0);
}
