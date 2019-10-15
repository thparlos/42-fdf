/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:16:02 by thparlos          #+#    #+#             */
/*   Updated: 2019/10/15 15:26:45 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FDF_H
#	define FDF_H

#include <mlx.h>
#include <math.h>
#include "../libft/libft.h"
#define ISOMETRIC_PROJECTION 0
#define PARALLEL_PROJECTION 1

typedef struct	s_point
{
	int x;
	int y;
	int z;
	int z0;
	int x2;
	int y2;
}				t_point;

typedef struct	s_fdf
{
	t_point	**tab;
	char	**sstr;
	int		color;
	int		fd;
	int		ret;
	int		res_width;
	int		res_height;
	int		high;
	int		nb_line;
	int		nb_col;
	int		size;
	int		offset_x;
	int		offset_y;
	int		current_proj;
	char	*line;
	void	*win_ptr;
	void	*mlx_ptr;
}				t_fdf;

int				read_file(char *filename, t_fdf *ptr);
int				get_len(char *line);
void			fill_tab(char *filename, t_fdf *ptr);
void			freetab(char **str);
void			ft_error(t_fdf *ptr);

//fdf

void	errors(int i);
int		ft_fdf(char *filename);
int		ft_init_window(t_fdf *ptr);

//draw_lines

void	draw_line(t_fdf *ptr, t_point a, t_point b);
void	draw_lines(t_fdf *ptr, int i, int j);
void	ft_print_map(t_fdf *ptr);
void	switch_proj(t_fdf *ptr);
void	print_menu(t_fdf *ptr);

//fill_tab

void	fill_tab(char *filename, t_fdf *ptr);

//ft_init

int		ft_init_window(t_fdf *ptr);
void	ft_switch_para(t_fdf *ptr);
void	ft_switch_iso(t_fdf *ptr);

//key_functions

int		key_function(int keycode, t_fdf *ptr);
int		key_function_part_1(int keycode, t_fdf *ptr);
int		key_function_part_2(int keycode, t_fdf *ptr);
int		mouse_function(int keycode, t_fdf *ptr);

//params

void	set_high(t_fdf *ptr);
void	set_color(int keycode, t_fdf *ptr);
void	set_offset_x(int keycode, t_fdf *ptr);
void	set_offset_y(int keycode, t_fdf *ptr);
void	set_size(t_fdf *ptr);

#	endif