/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 11:16:48 by ndlamini          #+#    #+#             */
/*   Updated: 2019/09/27 11:17:02 by ndlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		move_direction2(int *a, int a_c, int i, int pos)
{
	int sm;
	int j;
	int ans;
	int ans2;

	j = 0;
	sm = check_small(a, a_c, pos);
	while (sm != a[j])
		j++;
	ans = a_c - (j * 2);
	ans2 = (i - a_c) - ((pos - a_c) * 2);
	if (ans < 0 && ans2 < 0)
		a_c = rrr_function(pos, a, a_c, i);
	else if (ans >= 0 && ans2 >= 0)
		a_c = rr_function(pos, a, a_c, i);
	else if (ans >= 0 && ans2 < 0)
		a_c = rra_rb(pos, a, a_c, i);
	else if (ans < 0 && ans2 >= 0)
		a_c = ra_rrb(pos, a, a_c, i);
	return (a_c);
}

int		move_direction(int *a, int a_c, int i)
{
	int sm;
	int pos;

	pos = count_moves(a, a_c, i);
	sm = check_small(a, a_c, pos);
	if (sm == a[pos])
		a_c = pb_rb(a, a_c, i, sm);
	else
		a_c = move_direction2(a, a_c, i, pos);
	return (a_c);
}

int		condition_checker(int *a, int a_c, int i, int *big)
{
	if ((a[a_c] == big[0]) || (a[a_c] == big[1]) || (a[a_c] == big[2]))
	{
		ra(a, a_c, i);
		ft_putstr("ra\n");
	}
	else if (a_c <= 1)
	{
		a_c = pb(a, a_c, i);
		ft_putstr("pb\n");
		if (a_c == 2)
		{
			if (a[0] < a[1])
			{
				sb(a, a_c);
				ft_putstr("sb\n");
			}
		}
	}
	else
		a_c = move_direction(a, a_c, i);
	return (a_c);
}

int		program_loop(int *a, int a_c, int i, int *big)
{
	while (((check_sort(a, a_c, i) == 0) && (check_sort_a(a, a_c, i) == 0))
		|| ((check_sort_a(a, a_c, i) == 1) && (check_sort(a, a_c, i) == 0)))
	{
		a_c = condition_checker(a, a_c, i, big);
		if (i - a_c == 3)
			small_sort(a, a_c, i);
		if (i - a_c == 3)
			break ;
	}
	if (i - a_c == 3)
	{
		small_sort(a, a_c, i);
		while (a_c != 0)
			a_c = push_back(a, a_c, i);
	}
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
