/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerkulov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 15:15:43 by cerkulov          #+#    #+#             */
/*   Updated: 2019/07/16 22:57:22 by cerkulov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int index1;
	unsigned int index2;

	index1 = 0;
	index2 = 0;
	while (src[index1] != '\0')
	{
		dest[index2] = src[index1];
		index1++;
		index2++;
	}
	dest[index2] = '\0';
	return (dest);
}
