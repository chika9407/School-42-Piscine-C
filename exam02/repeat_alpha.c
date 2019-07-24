/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerkulov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 15:28:12 by cerkulov          #+#    #+#             */
/*   Updated: 2019/07/23 16:42:31 by cerkulov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		repeat(char c)
{
	int n;

	n = 0;
	if (c >= 'A' && c <= 'Z')
		n = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		n = c - 'a' + 1;
	else
		n = 1;
	return (n);
}

int		main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			j = repeat(av[1][i]);
			while (j--)
				write(1, &av[1][i], 1);
			i++;
		}
		av[1][i] = '\0';
	}
	write(1,"\n", 1);
	return (0);
}
