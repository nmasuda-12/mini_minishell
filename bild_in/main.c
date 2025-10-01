/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmasuda <nmasuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:54:35 by nmasuda           #+#    #+#             */
/*   Updated: 2025/09/30 21:48:19 by nmasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bildin.h"

void	bild_in_check(char **line, char **ev)
{
	char	**res;

	res = NULL;
	if (!ft_strncmp(line[CMD], "echo", 5))
		c_echo(line);
	else if (!ft_strncmp(line[CMD], "pwd", 4))
		c_pwd(line);
	else if (!ft_strncmp(line[CMD], "env", 4))
		c_env(line, ev);
	else if (!ft_strncmp(line[CMD], "cd", 3))
		c_cd(line);
	else if (!ft_strncmp(line[CMD], "exit", 5))
		c_exit(line);
	else if (!ft_strncmp(line[CMD], "unset", 6))
		res = c_unset(line, ev);
	else if (!ft_strncmp(line[CMD], "export", 7))
		c_export(line, ev);
}

int	main(int ac, char **av, char **ev)
{
	char	**line;

	(void)ac;
	line = av;
	bild_in_check(line, ev);
}
