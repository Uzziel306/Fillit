/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 16:15:28 by gsolis            #+#    #+#             */
/*   Updated: 2017/01/08 16:15:30 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	len;
	int	i;

	len = ft_strlen(s1);
	i = 0;
	while (s2[i])
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = '\0';
	return (s1);
}