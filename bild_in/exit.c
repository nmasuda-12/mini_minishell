/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmasuda <nmasuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 18:36:17 by nmasuda           #+#    #+#             */
/*   Updated: 2025/09/30 20:39:12 by nmasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bildin.h"

void	c_exit(char **line)
{
	if (line[CMD + 1])
		arg_error("Too many args for exit command");
	else
		exit(0);
}
