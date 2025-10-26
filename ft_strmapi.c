/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:03:30 by blanglai          #+#    #+#             */
/*   Updated: 2025/10/26 15:27:15 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	char *res;
	int i;
	int len;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if(!(res = malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = (*f) (i, s[i]);
		i++;
	}
	res[len] = '\0';
	return (res);
}
