/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerkulov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:04:39 by cerkulov          #+#    #+#             */
/*   Updated: 2019/07/16 22:33:43 by cerkulov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1,char *s2, unsigned int n)
{
	unsigned int i;
	
	i=0;
	while(s1[i]!='\0' && s2[i]!='\0' && i<n)
	{
		if(s1[i]!=s2[i])
			return(s1[i]-s2[i]);
		i++;
	}
	if(i<n&&((s1[i]=='\0'&&s2[i]!='\0')||
				(s2[i]=='\0'&&s1[i]!='\0')))
		return(s1[i]-s2[i]);
	return (0);
}
