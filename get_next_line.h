/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 02:55:36 by rhaque            #+#    #+#             */
/*   Updated: 2017/10/12 03:43:19 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "./libft/includes/libft.h"

# define BUFF_SIZE		1024

# define WORKED			1
# define SUCKED			-1
# define DONE			0

typedef	struct			s_file
{
	int					fd;
	char				*buffer;
}						t_file;

int						get_next_line(const int fd, char **line);

#endif
