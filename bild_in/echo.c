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

void	arg_check(void)
{
}

void	c_echo(char **line)
{
	int	i;
	int j;

	i = 2;
	if (!line[i])
		arg_error("echo");
	if (!line[i + 1] && !ft_strncmp(line[i], "-n", 3))
		arg_error("error -n");
	if (!ft_strncmp(line[i], "-n", 3))
	{
		i++;
		while (line[i])
		{
			printf("%s", line[i]);
			i++;
		}
	}
	else
	{
		while(line[i])
		{
			j = 0;
			if(line[i][j] == ' ')
				printf(" ");
			while (line[i][j])
			{
				printf("%c", line[i][j]);
				j++;
			}
			i++;
		}
			printf("\n");
	}
}
