/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   params.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 18:42:11 by amarcel           #+#    #+#             */
/*   Updated: 2019/05/21 16:35:55 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef PARAMS_H
#	define PARAMS_H

#include "ft_init.h"

void	set_high(t_fdf *ptr);
void	set_color(int keycode, t_fdf *ptr);
void	set_offset_x(int keycode, t_fdf *ptr);
void	set_offset_y(int keycode, t_fdf *ptr);
void	set_size(t_fdf *ptr);

#	endif
