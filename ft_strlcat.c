/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:30:30 by blanglai          #+#    #+#             */
/*   Updated: 2025/10/17 22:22:06 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	unsigned int i;
	unsigned char dst_len;

	i = 0;
	dst_len = 0;

	while (dst[dst_len] && dst_len < size) 
		dst_len++;
	while (src[i] && (dst_len + i + 1) < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len < size) 
		dst[dst_len +i] = '\0';
	return (dst_len + ft_strlen(src));	
}
