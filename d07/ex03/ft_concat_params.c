/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerkulov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 23:12:53 by cerkulov          #+#    #+#             */
/*   Updated: 2019/07/18 23:31:35 by cerkulov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char *str);

void	ft_strlen(char str);

char	*ft_concat_params(int argc, char **argv)
{
	int i;

	i = 0;

	*argv = (char**)malloc(sizeof(char) * ft_strlen(*argv))
	while (i < argc)
	{
		ft_putstr(argv[i])+argv[i+1];
		i++;
	}
	return (0);
}
