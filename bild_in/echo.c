/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmasuda <nmasuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:55:02 by nmasuda           #+#    #+#             */
/*   Updated: 2025/09/30 14:34:24 by nmasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bildin.h"

static void	echo_print(char **line)
{
	int	i;

	i = 1;
	while (line[CMD + i])
	{
		printf("%s", line[CMD + i]);
		i++;
	}
}

void	c_echo(char **line)
{
	if (!line[CMD + 1])
		printf("\n");
	else if (!ft_strncmp(line[CMD + 1], "-n", 3))
	{
		line++;
		echo_print(line);
	}
	else
	{
		echo_print(line);
		printf("\n");
	}
}
