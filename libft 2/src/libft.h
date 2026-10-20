/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 20:05:33 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/19 11:30:29 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>
#include <stdlib.h>
void *ft_memset(void *b, int c, size_t len);
void  *ft_calloc(size_t count, size_t size);
void *memchr(const void *s, int c, size_t n);
size_t	ft_strlen(const char *s);
char *strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

#endif