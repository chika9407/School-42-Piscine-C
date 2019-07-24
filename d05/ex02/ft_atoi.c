/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerkulov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:57:50 by cerkulov          #+#    #+#             */
/*   Updated: 2019/07/16 22:55:34 by cerkulov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int index;
	int nb;
	int sign;

	sign = 1;
	nb = 0;
	index = 0;
	while (str[index] == 32 || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == '-')
	{
		sign = -1;
		index++;
	}
	if (str[index] == '+')
		index++;
	while (str[index] >= 48 && str[index] <= 57)
	{
		nb = str[index] - '0';
		index++;
	}
	return (sign * nb);
}
