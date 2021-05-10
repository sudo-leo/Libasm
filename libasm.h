/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:52:18 by larmelli          #+#    #+#             */
/*   Updated: 2021/05/10 10:52:22 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(const char *str);
char *ft_strcpy(char *dest, const char *src);
int ft_strcmp(const char *dest, const char *src);
ssize_t ft_write(int fd, const char *str, size_t nbyte);
ssize_t ft_read(int fd, void *buf, size_t nbyte);
 char *ft_strdup(const char *s1);

#endif
