/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castro <castro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:51:15 by castro            #+#    #+#             */
/*   Updated: 2026/10/23 11:53:03 by castro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i = 0;
	int min = 2;
	int max = 10;
	int	*arr;


	arr = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%i\n", arr[i]);
		i++;
	}

	return (0);
}*/
