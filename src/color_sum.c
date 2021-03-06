/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_sum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 18:00:20 by zkerriga          #+#    #+#             */
/*   Updated: 2020/07/06 18:01:22 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic_math.h"

/*
** The function sums the values for all channels from two vectors
** (the maximum value is 1.0).
** The Function returns a pointer to `dest` without changes.
*/

t_rgbvec	*color_sum(t_rgbvec *dest, t_rgbvec *col1, t_rgbvec *col2)
{
	float	tmp;

	if ((tmp = col1->r + col2->r) > 1.f)
		dest->r = 1.f;
	else
		dest->r = tmp;
	if ((tmp = col1->g + col2->g) > 1.f)
		dest->g = 1.f;
	else
		dest->g = tmp;
	if ((tmp = col1->b + col2->b) > 1.f)
		dest->b = 1.f;
	else
		dest->b = tmp;
	return (dest);
}
