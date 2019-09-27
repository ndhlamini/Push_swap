/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 11:33:09 by ndlamini          #+#    #+#             */
/*   Updated: 2019/09/27 11:33:27 by ndlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		push_back(int *a, int a_c, int i)
{
	int big;
	int pos;
	int ans;

	big = biggest(a, a_c);
	pos = position_b(a, big, a_c);
	ans = (i - a_c) - ((pos - a_c) * 2);
	if (ans >= 0)
	{
		while (a[0] != big)
		{
			rb(a, a_c);
			ft_putstr("rb\n");
		}
	}
	else
	{
		while (a[0] != big)
		{
			rrb(a, a_c);
			ft_putstr("rrb\n");
		}
	}
	a_c = push_back2(a, a_c, i);
	return (a_c);
}

int		push_back2(int *a, int a_c, int i)
{
	while (a_c > 0)
	{
		if (a[0] < a[a_c])
		{
			if (a[i - 1] < a[a_c] && a[i - 1] > a[0])
			{
				rra(a, a_c, i);
				ft_putstr("rra\n");
			}
			else
			{
				a_c = pa(a, a_c);
				ft_putstr("pa\n");
			}
		}
		else if (a[0] > a[a_c])
		{
			ra(a, a_c, i);
			ft_putstr("ra\n");
		}
	}
	if (check_sort(a, a_c, i) == 0)
		push_back3(a, a_c, i);
	return (a_c);
}

void	push_back3(int *a, int a_c, int i)
{
	rra(a, a_c, i);
	ft_putstr("rra\n");
}
