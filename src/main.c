/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:23:15 by thparlos          #+#    #+#             */
/*   Updated: 2019/10/15 15:24:11 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
		errors(2);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		errors(3);
	else
		ft_fdf(argv[1]);
	close(fd);
	return (0);
}