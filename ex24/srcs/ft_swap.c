/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castro <castro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:49:30 by castro            #+#    #+#             */
/*   Updated: 2026/10/30 15:09:56 by castro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int	main(void)
{
	int	x = 10;
	int	y = 500;

	ft_swap(&x, &y);
	printf("x = %i, y = %i\n", x, y);
	return (0);
}*/
