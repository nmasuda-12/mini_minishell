/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmasuda <nmasuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 21:33:37 by nmasuda           #+#    #+#             */
/*   Updated: 2025/09/30 21:55:31 by nmasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bildin.h"

void	print_ev(char **new_ev)
{
	int	i;

	i = 0;
	while (new_ev[i])
	{
		printf("%s\n", new_ev[i]);
		i++;
	}
}

void	c_export(char **line, char **ev)
{
	char	**new_ev;
	int		l;
	int		n_l;

	new_ev = NULL;
	l = 0;
	n_l = l;
	while (ev[l])
		l++;
	new_ev = (char **)malloc(sizeof(char *) * l + 1);
	if (!new_ev)
	{
		arg_error("仮置きしてるmallocエラー");
	}
	while (ev[n_l])
	{
		new_ev[n_l] = (char *)malloc(sizeof(char) * ft_strlen(ev[n_l]));
		if (!new_ev)
		{
			arg_error("仮置きしてるmallocエラー"); // still reachable に気をつけるんだ
		}
		new_ev[n_l] = ev[n_l];
		n_l++;
	}
	new_ev[n_l] = (char *)malloc(sizeof(char) *ft_strlen(line[CMD + 1]));
	if (!new_ev)
	{
		arg_error("仮置きしてるmallocエラー"); // still reachable に気をつけるんだ
	}
	new_ev[n_l] = line[CMD + 1];
	print_ev(new_ev);
	// return (new_ev);
}
