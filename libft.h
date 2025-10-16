/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:13:46 by blanglai          #+#    #+#             */
/*   Updated: 2025/10/16 17:41:48 by roubs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
	#define LIBFT_H
    int ft_isprint(int  c);
    int ft_isascii(int    c);
    int ft_isalpha(int  c);
    int ft_isdigit(int  c);
    int ft_isalnum(int  c);
    int ft_strlen(const char *str);
    unsigned int ft_strlcpy(char *dst, const char *src, unsigned int dstsize);
    void *ft_memset(void *ptr, int x, unsigned long n);
    void ft_bzero(void *p, unsigned long n);
#endif
