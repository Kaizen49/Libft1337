/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 20:05:33 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/16 19:06:47 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft
#define libft
#include <string.h>
#include <stdlib.h>
void *ft_memset(void *b, int c, size_t len);
void  *ft_calloc(size_t count, size_t size);
void *memchr(const void *s, int c, size_t n);
size_t	ft_strlen(const char *s);
#endif