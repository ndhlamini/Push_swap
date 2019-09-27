/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 10:57:42 by ndlamini          #+#    #+#             */
/*   Updated: 2019/09/27 10:57:48 by ndlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		check_sort(int *a, int a_c, int i)
{
	int j;

	j = 0;
	if (a_c != 0)
		return (0);
	while (j < i - 1)
	{
		if (a[j] > a[j + 1])
			return (0);
		j++;
	}
	return (1);
}

void	results(int *a, int a_c, int i)
{
	int n;

	n = check_sort(a, a_c, i);
	if (n == 1)
		ft_putstr("\e[32mOK\e[0m\n");
	else
		ft_putstr("\e[31mKO\e[0m\n");
}

int		check_line(char *line, int *a, int a_c, int i)
{
	if (ft_strcmp("sa", line) == 0)
		sa(a, a_c, i);
	else if (ft_strcmp("sb", line) == 0)
		sb(a, a_c);
	else if (ft_strcmp("ss", line) == 0)
		ss(a, a_c, i);
	else if (ft_strcmp("pb", line) == 0)
		a_c = pb(a, a_c, i);
	else if (ft_strcmp("pa", line) == 0)
		a_c = pa(a, a_c);
	else if (ft_strcmp("rb", line) == 0)
		rb(a, a_c);
	else if (ft_strcmp("ra", line) == 0)
		ra(a, a_c, i);
	else if (ft_strcmp("rr", line) == 0)
		rr(a, a_c, i);
	else if (ft_strcmp("rra", line) == 0)
		rra(a, a_c, i);
	else if (ft_strcmp("rrb", line) == 0)
		rrb(a, a_c);
	else if (ft_strcmp("rrr", line) == 0)
		rrr(a, a_c, i);
	else
		a_c = -1;
	return (a_c);
}

int		main(int argc, char **argv)
{
	int a_c;

	a_c = 0;
	if (check_all(argc, argv))
	{
		if (argc == 2)
			arg_two(argv, a_c);
		else if (argc > 2)
			arg_many(argc, argv);
	}
	return (0);
}
