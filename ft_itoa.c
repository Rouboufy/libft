/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 11:26:45 by blanglai          #+#    #+#             */
/*   Updated: 2025/10/26 14:55:27 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int len_nbr(long nbr)
{
    int count = 0;

    if (nbr <= 0)
        count++;
    while (nbr)
    {
        nbr /= 10;
        count++;
    }
    return count;
}

static char *pre_conv(int len)
{
    char *tmp;

    if(!(tmp = malloc(len + 1)))
        return NULL;
    return tmp;
}

char *ft_itoa(int n)
{
    long nbr = n;
    int len = len_nbr(nbr);
    char *result = pre_conv(len);
    int i;

    if (!result)
        return NULL;
    result[len] = '\0';
    if (nbr < 0)
        nbr = -nbr;
    i = len - 1;
    if (n == 0)
        result[0] = '0';
    while (nbr)
    {
        result[i--] = (nbr % 10) + '0';
        nbr /= 10;
    }
    if (n < 0)
        result[0] = '-';
    return result;
}

