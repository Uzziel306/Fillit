/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 20:06:36 by gsolis            #+#    #+#             */
/*   Updated: 2017/02/15 20:06:39 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/fillit.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *s)
{
	if (s)
		while (*s)
			ft_putchar((char)*s++);
}