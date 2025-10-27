/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:13:46 by blanglai          #+#    #+#             */
/*   Updated: 2025/10/27 21:24:46 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
	#define LIBFT_H
	#include <stddef.h>
	#include <stdlib.h>
	#include <unistd.h>
	#  define SIZE_MAX		(18446744073709551615UL)
	char *ft_strmapi(char *s, char (*f)(unsigned int, char));
	void *ft_calloc(size_t n, size_t size);
	char *ft_substr(char const *s, unsigned int start, size_t len);
	char *ft_strdup(const char *s);
	char *ft_itoa(int n);
	int ft_atoi(const char *nptr);
    int ft_isprint(int  c);
	int ft_toupper(int	c);
	int ft_tolower(int	c);
    int ft_isascii(int    c);
    int ft_isalpha(int  c);
    int ft_isdigit(int  c);
    int ft_isalnum(int  c);
    int ft_strlen(const char *str);
	char *ft_strchr(const char *s, int c);
	char	*ft_strrchr(const char *s, int c);
    size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
    size_t ft_strlcat(char *dst, const char *src, size_t dst_size);
    void *ft_memset(void *ptr, int x, unsigned long n);
    void ft_bzero(void *p, unsigned long n);
	void	*ft_memcpy(void *dst, const void *src, size_t n);
#endif
