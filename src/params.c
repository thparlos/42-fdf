/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   params.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:23:40 by thparlos          #+#    #+#             */
/*   Updated: 2019/10/15 15:24:05 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	set_size(t_fdf *ptr)
{
	int	i;
	int	j;

	i = 0;
	while (i < ptr->nb_line)
	{
		j = 0;
		while (j < ptr->nb_col)
		{
			ptr->tab[i][j].x = j * ptr->size;
			ptr->tab[i][j].y = i * ptr->size;
			j++;
		}
		i++;
	}
}

void	set_high(t_fdf *ptr)
{
	int	i;
	int	j;

	i = 0;
	while (i < ptr->nb_line)
	{
		j = 0;
		while (j < ptr->nb_col)
		{
			ptr->tab[i][j].z = ptr->tab[i][j].z0 * ptr->high;
			j++;
		}
		i++;
	}
}

void	set_color(int keycode, t_fdf *ptr)
{
	if (keycode == 15)
	{
		ptr->color = 0x00FF0000;
		ft_print_map(ptr);
	}
	if (keycode == 5)
	{
		ptr->color = 0x0000FF00;
		ft_print_map(ptr);
	}
	if (keycode == 11)
	{
		ptr->color = 0x000000FF;
		ft_print_map(ptr);
	}
	if (keycode == 13)
	{
		ptr->color = 0x00FFFFFF;
		ft_print_map(ptr);
	}
}

void	set_offset_x(int keycode, t_fdf *ptr)
{
	if (keycode == 123)
	{
		ptr->offset_x += 50;
		mlx_clear_window(ptr->mlx_ptr, ptr->win_ptr);
		ft_print_map(ptr);
	}
	if (keycode == 124)
	{
		ptr->offset_x -= 50;
		mlx_clear_window(ptr->mlx_ptr, ptr->win_ptr);
		ft_print_map(ptr);
	}
}

void	set_offset_y(int keycode, t_fdf *ptr)
{
	if (keycode == 126)
	{
		ptr->offset_y += 50;
		mlx_clear_window(ptr->mlx_ptr, ptr->win_ptr);
		ft_print_map(ptr);
	}
	if (keycode == 125)
	{
		ptr->offset_y -= 50;
		mlx_clear_window(ptr->mlx_ptr, ptr->win_ptr);
		ft_print_map(ptr);
	}
}