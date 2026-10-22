/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castro <castro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:06:53 by castro            #+#    #+#             */
/*   Updated: 2026/10/22 13:16:17 by castro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
void	ft_putstr(char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		write(1, &s1[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char *temp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if ((ft_strcmp(argv[i], argv[j])) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
