/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmasuda <nmasuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:54:46 by nmasuda           #+#    #+#             */
/*   Updated: 2025/09/30 20:04:35 by nmasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bildin.h"

void	arg_error(char *mess)
{
	printf("Error:%s\n", mess);
	exit(1);
}

void	search_error(char *mess1, char *arg, char *mess2)
{
	printf("Error:%s", mess1);
	printf("%s", arg);
	printf("%s\n", mess2);
	exit(1);
}
