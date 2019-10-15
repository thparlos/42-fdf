/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:24:32 by thparlos          #+#    #+#             */
/*   Updated: 2019/10/15 15:24:55 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		get_len(char *line)
{
	char	**sstr;
	t_fdf	tmp;

	sstr = ft_strsplit(line, ' ');
	tmp.nb_col = ft_sstrlen(sstr);
	freetab(sstr);
	return (tmp.nb_col);
}

int		read_file(char *filename, t_fdf *ptr)
{
	ptr->fd = open(filename, O_RDONLY);
	while (get_next_line(ptr->fd, &ptr->line))
	{
		ptr->nb_line++;
		if (!ptr->line)
			errors(1);
		ptr->nb_col = get_len(ptr->line);
		ft_error(ptr);
		free(ptr->line);
	}
	if (!ptr->line)
		errors(1);
	free(ptr->line);
	close(ptr->fd);
	return (0);
}

void	freetab(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	ft_error(t_fdf *ptr)
{
	int i;

	i = 0;
	while (i < get_len(ptr->line))
	{
		if (!((ptr->line[i] >= '0' && ptr->line[i] <= '9') || ptr->line[i]\
					== '-' || ptr->line[i] == ' '))
			errors(0);
		i++;
	}
}