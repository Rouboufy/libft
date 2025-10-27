/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:33:01 by blanglai          #+#    #+#             */
/*   Updated: 2025/10/27 21:51:19 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned const char	*s;

	s = str;
	if (n == 0)
		return (NULL);
	while (n > 0)
	{
		if (*s == (unsigned char)c)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}
