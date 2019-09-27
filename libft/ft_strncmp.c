/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 07:19:58 by ndlamini          #+#    #+#             */
/*   Updated: 2019/06/26 09:14:35 by ndlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int i;

	i = 0;
	while (n-- && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] - (unsigned char)s2[i] < 0)
			return (-1);
		else if ((unsigned char)s1[i] - (unsigned char)s2[i] > 0)
			return (1);
		i++;
	}
	return (0);
}
