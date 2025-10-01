/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmasuda <nmasuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:56:28 by nmasuda           #+#    #+#             */
/*   Updated: 2025/09/30 21:54:08 by nmasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bildin.h"
#include <stddef.h>

int	ft_strncmp(char *s1, const char *s2, size_t n)
{
	while (n && *s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		(void)(n--, s1++, s2++);
	}
	if (n)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}

void	ft_bzero(char *s, size_t n)
{
	while (n)
	{
		*s = 0;
		s++;
		n--;
	}
}

int 	ft_strlen(char *str)
{
	char	*head;

	head = str;
	while (*str != '\0')
		str++;
	return (str - head);
}
