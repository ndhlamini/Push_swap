/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 06:53:20 by ndlamini          #+#    #+#             */
/*   Updated: 2019/07/04 13:47:57 by ndlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	char	*s;
	size_t	size;
	size_t	c;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	s = (char *)malloc((size + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	ptr = s;
	c = -1;
	while (s1[++c] != '\0')
		*ptr++ = s1[c];
	c = -1;
	while (s2[++c] != '\0')
		*ptr++ = s2[c];
	*ptr = '\0';
	return (s);
}
