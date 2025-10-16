/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:23:15 by blanglai          #+#    #+#             */
/*   Updated: 2025/10/16 20:48:43 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, unsigned long n) {
    unsigned char* d;
    unsigned const char* s;

    d = dest;
    s = src;
    while (n--) {
       *d++ = *s++;
    }
    return (dest);
}
