/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:03:59 by ndlamini          #+#    #+#             */
/*   Updated: 2019/06/21 12:34:22 by ndlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			j;
	unsigned char	*start;

	start = (unsigned char *)s;
	j = 0;
	while (j < len)
	{
		start[j] = c;
		j++;
	}
	return ((void *)s);
}
