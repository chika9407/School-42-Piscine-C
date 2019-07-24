/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerkulov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:46:54 by cerkulov          #+#    #+#             */
/*   Updated: 2019/07/16 23:21:41 by cerkulov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (!to_find[0])
	{
		return (&str[i]);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			j++;
		}
		if (!to_find[j])
		{
			return (&str[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}
