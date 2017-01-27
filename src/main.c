/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 15:42:26 by apissier          #+#    #+#             */
/*   Updated: 2017/01/26 17:08:37 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/fdf.h"

void		ft_destroy(t_mlxparam *param)
{
	mlx_destroy_window(param->env.mlx, param->env.win);
	free(param);
}

int			ft_key_hook(int keycode, t_mlxparam *param)
{
	printf("Keycode %d\n", keycode);
	if (keycode == ESC)
	{
		ft_destroy(param);
		exit(0);
	}
	return(0);
}

void		ft_draw(t_mlxparam *param)
{
	int x;
	int y;

	x = 50;
	while (x < 150)
	{
		y = 50;
		while (y < 150)
		{
			mlx_pixel_put(param->env.mlx, param->env.win, x, y, 255);
			y++;
		}
		x++;
	}
}

int					main(int argc, char **argv)
{
	t_mlxparam		*param;

	if (argc != 2)
	{
		ft_putstr("usage : ./fdf <text_file>");
		return(-1);
	}
	param = (t_mlxparam *)malloc(sizeof(t_mlxparam));
	if (!(param->env.mlx = mlx_init()))
		return (-1);
	param->env.mlx = mlx_init();
	param->env.win = mlx_new_window(param->env.mlx, 300, 300, "FDP");
	ft_read_map(argv, param);
	ft_draw(param);
	mlx_key_hook(param->env.win, ft_key_hook, param);
	mlx_loop(param->env.mlx);
	return(0);
}

