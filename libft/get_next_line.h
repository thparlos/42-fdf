/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:51:26 by thparlos          #+#    #+#             */
/*   Updated: 2019/10/15 14:52:12 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef GET_NEXT_LINE_H
#	define GET_NEXT_LINE_H

#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include "../libft/libft.h"

#define BUFF_SIZE 3

int	get_next_line(const int fd, char **line);

#	endif