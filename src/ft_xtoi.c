/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 18:17:48 by apissier          #+#    #+#             */
/*   Updated: 2017/01/26 17:04:08 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static int		xtoi(char c)
{
	if (c >= '0' && c <= '9')
        return (c - '0');
    else
        return ((c >= 'a' ? c - 'a' : c - 'A') + 10);
}

long        ft_xtoi(char *nbr)
{
    ssize_t        i;
    long        ret;

    if (!*nbr)
        return (0);
    ret = ft_xtoi_char(*nbr);
    if ((i = ft_strlen(nbr)))
        ret *= pow(16, i - 1);
    return (ret + ft_xtoi(nbr + 1));
}
