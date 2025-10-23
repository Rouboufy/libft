/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:06:24 by blanglai          #+#    #+#             */
/*   Updated: 2025/10/23 19:03:51 by roubs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdio.h>
#include <stdlib.h>

static int issign(char *nptr);

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
		sign = issign(nptr);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] -'0');
		i++;
	}
	return (res * sign);
}

static int issign(char *nptr)
{
	int sign;
	int i;

	i = 0;
	sign = 1;
	if(nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	if(nptr[i] == '+')
		i++;
	return (sign);
}

int main (){
	char *s = "     -12345678";
	int chg = ft_atoi(s);
	int chg1 = atoi(s);

	printf("My result is: %i\n", chg);
	printf("Real atoi result is: %i\n", chg1);
}


