/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:06:24 by blanglai          #+#    #+#             */
/*   Updated: 2025/10/23 20:51:10 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int issign(const char *nptr, int *i);

int ft_atoi(const char *nptr) 
{
	int	res;
	int	i;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		sign = issign(nptr, &i);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] -'0');
		i++;
	}
	return (res * sign);
}

static int issign(const char *nptr, int *i)
{
	int sign;

	sign = 1;
	if(nptr[*i] == '-')
	{
		sign = -1;
		(*i)++;
	}
	else if(nptr[*i] == '+')
		(*i)++;
	return (sign);
}



