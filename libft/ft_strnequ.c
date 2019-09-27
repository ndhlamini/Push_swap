/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 06:38:09 by ndlamini          #+#    #+#             */
/*   Updated: 2019/06/07 07:32:30 by ndlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		x;

	if (!n)
		return (1);
	if (s1 && s2 && n)
	{
		x = 0;
		while (n > 0)
		{
			if (s1[x] != s2[x])
				return (0);
			x++;
			n--;
		}
		return (1);
	}
	return (0);
}
