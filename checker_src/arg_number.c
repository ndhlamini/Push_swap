/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 10:47:15 by ndlamini          #+#    #+#             */
/*   Updated: 2019/09/27 10:48:34 by ndlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	arg_two(char **str, int a_c)
{
	char	**str2;
	int		i;
	int		j;
	int		a[500];
	char	*line;

	i = 0;
	j = 0;
	str2 = ft_strsplit(str[1], ' ');
	while (str2[j])
		a[i++] = ft_atoi(str2[j++]);
	while (get_next_line(0, &line))
	{
		a_c = check_line(line, a, a_c, i);
		if (a_c == -1)
			break ;
	}
	if (a_c != -1)
		results(a, a_c, i);
	else
		ft_putstr("Error\n");
}

void	arg_many(int argc, char **argv)
{
	int		i;
	int		j;
	int		a[500];
	char	*line;
	int		a_c;

	i = 0;
	j = 1;
	a_c = 0;
	while (j < argc)
		a[i++] = ft_atoi(argv[j++]);
	while (get_next_line(0, &line))
	{
		a_c = check_line(line, a, a_c, i);
		if (a_c == -1)
			break ;
	}
	if (a_c != -1)
		results(a, a_c, i);
	else
		ft_putstr("Error\n");
}
