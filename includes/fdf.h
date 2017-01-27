/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 16:32:24 by apissier          #+#    #+#             */
/*   Updated: 2017/01/26 15:21:36 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <stdlib.h>
# include <unistd.h>
///// a virer ///////
# include <stdio.h>
# include "../libft/libft.h"
# include "../minilibx_macos/mlx.h"

# define ESC 53

typedef int key;

typedef struct		s_env
{
	void			*mlx;
	void			*win;
}					t_env;

typedef struct		s_mlxparam
{
	t_env			env;
}					t_mlxparam;

#endif
