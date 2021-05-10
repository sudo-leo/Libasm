/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:51:57 by larmelli          #+#    #+#             */
/*   Updated: 2021/05/10 10:52:02 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

extern	int		ft_strlen(const char *str);
extern char		*ft_strcpy(char *dest, const char *src);
extern int		ft_strcmp(const char *dest, const char *src);
extern ssize_t	ft_write(int fd, const char *str, size_t nbyte);
extern char		*ft_strdup(const char *str);

int	main(void)
{
	char	buffer[100];
	char	*s;
	int		i;

	i = 0;
	while (i < 100)
		buffer[i++] = 0;
	printf("test ft_strlen:\n");
	printf("length of \"hello world!\": %d\n", ft_strlen("hello world!"));
	printf("test ft_strcpy:\n");
	printf("dst: %s\n", ft_strcpy(buffer, "come"));
	printf("test ft_strcmp:\n");
	printf("strcmp between \"h\" and \"ha\" is %d\n", ft_strcmp("h", "ha"));
	ft_write(1, "hey there\n", 10);
	printf("test ft_strdup\n");
	s = ft_strdup("ciao!");
	printf("%s\n", s);
}
