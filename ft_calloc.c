/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:38:26 by blanglai          #+#    #+#             */
/*   Updated: 2025/10/23 22:00:28 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>
//VERIFIE SI TU PEUX UTILISER STDINT.H
void *ft_calloc(size_t n, size_t size)
{
	void *ptr;

	if (size != 0 && n > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(n * size);
	if (ptr)
		ft_memset(ptr, 0, n * size);
	return (ptr);
}
