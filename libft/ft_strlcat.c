/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 07:49:46 by ndlamini          #+#    #+#             */
/*   Updated: 2019/06/26 15:00:33 by ndlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < n)
		i++;
	while ((src[j] && (i + j + 1) < n))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i + j < n)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
