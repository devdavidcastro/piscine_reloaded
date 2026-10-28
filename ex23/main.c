/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castro <castro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 11:06:25 by castro            #+#    #+#             */
/*   Updated: 2026/10/28 11:10:31 by castro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

#include <stdio.h>
int	main(void)
{
	t_point	point;
	printf("x = %d, y = %d\n", point.x, point.y);
	set_point(&point);
	printf("x = %d, y = %d\n", point.x, point.y);
	return (0);
}

