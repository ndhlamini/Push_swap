/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 06:57:10 by ndlamini          #+#    #+#             */
/*   Updated: 2019/06/25 08:20:22 by ndlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwrds(char const *s, char c)
{
	int		i;
	int		countwrds;

	i = 0;
	countwrds = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			countwrds++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (countwrds);
}

static char	*ft_hello(char const *s, size_t n)
{
	char	*s1;

	s1 = (char *)malloc(sizeof(char) * (n + 1));
	if (s1 == NULL)
		return (0);
	s1 = ft_strncpy(s1, (char *)s, n);
	s1[n] = '\0';
	return (s1);
}

char		**ft_strsplit(char const *s, char c)
{
	int		x;
	int		y;
	int		z;
	char	**tab;

	if (!s || !c)
		return (NULL);
	y = ft_countwrds(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (y + 1))))
		return (NULL);
	x = 0;
	y = -1;
	while (s[x] != '\0')
	{
		while (s[x] == c)
			x++;
		z = x;
		while (s[x] && s[x] != c)
			x++;
		if (x > z)
			tab[++y] = ft_hello(s + z, x - z);
	}
	tab[++y] = NULL;
	return (tab);
}
