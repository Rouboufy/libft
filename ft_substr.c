/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:19:55 by blanglai          #+#    #+#             */
/*   Updated: 2025/10/24 18:27:50 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t  slen;
    size_t  i;

    if (!s)
        return NULL;
    slen = ft_strlen(s);
    if (start >= slen)
        return ft_strdup("");
    if (len > slen - start)
        len = slen - start;
    sub = malloc(len + 1);
    if (!sub)
        return NULL;
    i = 0;
    while (i < len)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}

