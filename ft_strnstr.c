/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:37:46 by blanglai          #+#    #+#             */
/*   Updated: 2025/10/27 21:53:44 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	const char	*b;
	const char	*s;
	size_t		l;

	if (*small == '\0')
		return ((char *)big);
	while (len > 0 && *big != '\0')
	{
		b = big;
		s = small;
		l = len;
		while (*b != '\0' && *s != '\0' && *b == *s && l > 0)
		{
			b++;
			s++;
			l--;
		}
		if (*s == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
