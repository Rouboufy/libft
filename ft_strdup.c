/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:44:06 by blanglai          #+#    #+#             */
/*   Updated: 2025/10/24 14:08:13 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char *d;
	char *dup;
	int len;

	len = ft_strlen(s);
	if (!(d = malloc(len * sizeof(char) + 1)))
		return (NULL);
	dup = d;
	while(*s)
	{
		*d = *s;
		d++;
		s++;
	}
	*d = '\0';
	return (dup);
}
