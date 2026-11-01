/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castro <castro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 08:47:29 by castro            #+#    #+#             */
/*   Updated: 2026/11/01 09:19:32 by castro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display_file(char *str)
{
	char	arr[1024];
	int		num;
	int		value;

	num = open(str, O_RDONLY);
	value = read(num, arr, 1024);
	if (num < 0)
		return (0);
	while (value > 0)
	{
		write(1, arr, value);
		value = read(num, arr, 1024);
	}
	if (value < 0)
	{
		close(num);
		return (0);
	}
	close(num);
	return (1);
}

int	main(int argc, char **argv)
{
	int	result;

	if (argc < 2)
	{
		write(1, "File name missing.", 18);
		return (0);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.", 19);
		return (0);
	}
	else
	{
		result = ft_display_file(argv[1]);
		if (result == 0)
			write(1, "Cannot read file.", 17);
	}
	return (0);
}
