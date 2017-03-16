/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:08:32 by gsolis            #+#    #+#             */
/*   Updated: 2017/01/09 13:08:33 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*x;

	x = (char *)s + ft_strlen(s);
	c = (char)c;
	while (x >= s)
	{
		if (*x == c)
			return (x);
		--x;
	}
	return (NULL);
}