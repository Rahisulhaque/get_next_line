/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 03:49:21 by rhaque            #+#    #+#             */
/*   Updated: 2017/10/12 06:03:32 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_file	*find_or_create_files(int fd, t_list **pointer2file)
static	ssize_t read_minimun_one_line(t_file *file)
int				get_next_line(const int fd, char **line)
{
	static t_list	*files;
	ssize_t			bytes_read;
	char			*temp;

	if	(fd < 0 || line == NULL)
	{
		return (SUCKED)
	}
	file = find_or_create_files(fd, &files);
	if ((bytes_read = read_minimun_one_line(filels 
