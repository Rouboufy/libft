/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:38:26 by blanglai          #+#    #+#             */
/*   Updated: 2025/10/27 21:50:25 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (n == 0 || size == 0)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	if (n > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(n * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, n * size);
	return (ptr);
}
