/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:38:19 by ndlamini          #+#    #+#             */
/*   Updated: 2019/09/27 12:38:27 by ndlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	arg_two(char **str, int a_c)
{
	char	**str2;
	int		i;
	int		j;
	int		a[500];
	int		big[3];

	i = 0;
	j = 0;
	str2 = ft_strsplit(str[1], ' ');
	while (str2[j])
		a[i++] = ft_atoi(str2[j++]);
	big[0] = biggest(a, i);
	big[1] = second_biggest(a, i);
	big[2] = third_biggest(a, i);
	if (i > 3)
		a_c = program_loop(a, a_c, i, big);
	else if (i == 3)
		small_sort(a, a_c, i);
	else if (i == 2)
		sort_two(a, a_c, i);
}

void	arg_many(int argc, char **argv)
{
	int i;
	int j;
	int a[500];
	int big[3];
	int a_c;

	i = 0;
	j = 1;
	a_c = 0;
	while (j < argc)
		a[i++] = ft_atoi(argv[j++]);
	big[0] = biggest(a, i);
	big[1] = second_biggest(a, i);
	big[2] = third_biggest(a, i);
	if (i > 3)
		a_c = program_loop(a, a_c, i, big);
	else if (i == 3)
		small_sort(a, a_c, i);
	else if (i == 2)
		sort_two(a, a_c, i);
}
