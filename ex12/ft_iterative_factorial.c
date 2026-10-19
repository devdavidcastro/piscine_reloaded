/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castro <castro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:01:57 by castro            #+#    #+#             */
/*   Updated: 2026/10/19 15:13:51 by castro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		num *= nb;
		nb--;
	}
	return (num);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_iterative_factorial(5));
	return (0);
}*/
