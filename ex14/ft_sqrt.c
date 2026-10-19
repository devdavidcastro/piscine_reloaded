/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castro <castro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:40:04 by castro            #+#    #+#             */
/*   Updated: 2026/10/19 15:49:43 by castro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while ((i * i) < nb)
	{
		i++;
	}
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_sqrt(-9));
	return (0);
}*/
