/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:44:49 by blanglai          #+#    #+#             */
/*   Updated: 2025/10/27 21:51:46 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*p;

	p = ptr;
	while (n--)
	{
		*p++ = (unsigned char)x;
	}
	return (ptr);
}
