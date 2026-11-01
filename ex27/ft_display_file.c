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
	char arr[1024];
}

int	main(int argc, char **argv)
{
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
		ft_display_file(argv[1]);
	}
	return (0);
}
