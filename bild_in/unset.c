/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmasuda <nmasuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 20:33:26 by nmasuda           #+#    #+#             */
/*   Updated: 2025/09/30 21:29:40 by nmasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bildin.h"

// void	print_ev(char **new_ev)
// {
// 	int	i;

// 	i = 0;
// 	while (new_ev[i])
// 	{
// 		printf("%s\n", new_ev[i]);
// 		i++;
// 	}
// }

char	**c_unset(char **line, char **ev)
{
	int		l;
	int		n_l;
	char	**new_ev;
	int		i;

	if (!line[CMD + 1])
		arg_error("unset: not enough arguments");
	l = 0;
	n_l = l;
	new_ev = (char **)malloc(sizeof(char *) * PATH_MAX);
	if (!new_ev)
	{
		arg_error("仮置きしてるmallocエラー");
	}
	i = 0;
	while (ev[l])
	{
		if (!ft_strncmp(line[CMD + 1], ev[l], (ft_strlen(line[CMD]) - 1)))
		{
			i++;
			l++;
		}
		new_ev[n_l] = ev[l];
		l++;
		n_l++;
	}
	// print_ev(new_ev);
	return (new_ev);
}
