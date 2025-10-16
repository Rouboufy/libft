/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:44:49 by blanglai          #+#    #+#             */
/*   Updated: 2025/10/16 17:01:10 by roubs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *ptr, int  x, unsigned long n){
    unsigned char* p = ptr;
    while (n--) {
        *p++ = (unsigned char) x;
    }
    return (ptr);
}

#include <stdio.h>
#include <string.h>

int main () 
{
   char str[50];

   strcpy(str, "Welcome to Tutorialspoint");
   puts(str);

  ft_memset(str, '#', 7);
   puts(str);
   
   return(0);
}
