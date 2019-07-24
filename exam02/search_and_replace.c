/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerkulov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 16:44:14 by cerkulov          #+#    #+#             */
/*   Updated: 2019/07/23 17:16:06 by cerkulov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 4 && av[2][1] == '\0' && av[3][1] == '\0')
	{
		while (av[1][i])
		{
			if (av[1][i] == av[2][0])
			{
				av[1][i] = av[3][0];
			}
			write (1, &av[1][i], 1);
			i++;
		}
		write (1, "\n", 1);
		return (0);
	}
	write (1, "\n", 1);
	return (0);
}
