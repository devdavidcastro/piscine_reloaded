/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castro <castro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 15:17:26 by castro            #+#    #+#             */
/*   Updated: 2026/10/30 15:30:19 by castro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*
#include <stdio.h>
void	ft_putnbr(int	num)
{
	printf("%d\n", num);
}


int	main(void)
{
	int	arr[] = {0, 1, 2, 3, 4};
	ft_foreach(arr, 5, ft_putnbr);
	return (0);
}*/
