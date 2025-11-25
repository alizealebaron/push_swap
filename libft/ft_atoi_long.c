/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebaron <alebaron@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:58:00 by alebaron          #+#    #+#             */
/*   Updated: 2025/11/17 12:38:59 by alebaron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c);

long	ft_atoi_long(const char *nptr)
{
	size_t	i;
	long	ret_int;
	int		modif;

	i = 0;
	ret_int = 0;
	modif = 1;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			modif = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		ret_int = ret_int * 10 + (nptr[i++] - '0');
	}
	return (ret_int * modif);
}

static int	ft_isspace(int c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}
