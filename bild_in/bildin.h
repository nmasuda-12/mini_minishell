/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bildin.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmasuda <nmasuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:54:53 by nmasuda           #+#    #+#             */
/*   Updated: 2025/09/30 21:47:47 by nmasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BILDIN_H_
# define _BILDIN_H_

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define CMD 1
# define PATH_MAX 4096

void	bild_in_check(char **line, char **ev);

//-----command------
void	c_echo(char **line);
void	c_pwd(char **line);
void	c_env(char **line, char **ev);
void	c_cd(char **line);
void	c_exit(char **line);
char	**c_unset(char **line, char **ev);
void c_export(char **line, char **ev);

//-----error--------
void	arg_error(char *mess);
void	search_error(char *mess1, char *arg, char *mess2);

//-----utils---------
int		ft_strncmp(char *s1, const char *s2, size_t n);
void	ft_bzero(char *s, size_t n);
int		ft_strlen(char *str);

#endif