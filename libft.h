/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:13:46 by blanglai          #+#    #+#             */
/*   Updated: 2025/10/17 22:13:59 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
	#define LIBFT_H
	#include <stddef.h>
    int ft_isprint(int  c);
    int ft_isascii(int    c);
    int ft_isalpha(int  c);
    int ft_isdigit(int  c);
    int ft_isalnum(int  c);
    int ft_strlen(const char *str);
    size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
    size_t ft_strlcat(char *dst, const char *src, size_t dst_size);
    void *ft_memset(void *ptr, int x, unsigned long n);
    void ft_bzero(void *p, unsigned long n);
#endif
