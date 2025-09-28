/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmasuda <nmasuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 20:34:13 by nmasuda           #+#    #+#             */
/*   Updated: 2025/09/28 20:35:54 by nmasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_minishell.h"

int	main(int argc, char **argv)
{
	char *line;
	while (1)
	{
		line = readline("minishell> ");
		if (!line)
			break ;
		if (*line)
			add_history(line);
		free(line);
	}
	return (0);
}
