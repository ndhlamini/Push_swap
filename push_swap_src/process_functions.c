/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:35:31 by ndlamini          #+#    #+#             */
/*   Updated: 2019/09/27 12:35:34 by ndlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		pos_sm(int *a, int a_c, int element)
{
	int sm;
	int j;

	sm = check_small(a, a_c, element);
	j = 0;
	while (sm != a[j])
		j++;
	return (j);
}

int		rrr_function(int element, int *a, int a_c, int i)
{
	int j;

	j = pos_sm(a, a_c, element);
	while (element < i && j < a_c)
	{
		rrr(a, a_c, i);
		ft_putstr("rrr\n");
		element++;
		j++;
	}
	while (element < i)
	{
		rra(a, a_c, i);
		ft_putstr("rra\n");
		element++;
	}
	while (j < a_c)
	{
		rrb(a, a_c);
		ft_putstr("rrb\n");
		j++;
	}
	a_c = pb(a, a_c, i);
	ft_putstr("pb\n");
	return (a_c);
}

int		rr_function(int element, int *a, int a_c, int i)
{
	int j;

	j = pos_sm(a, a_c, element);
	while (element > a_c && j > 0)
	{
		rr(a, a_c, i);
		ft_putstr("rr\n");
		element--;
		j--;
	}
	while (element > a_c)
	{
		ra(a, a_c, i);
		ft_putstr("ra\n");
		element--;
	}
	while (j > 0)
	{
		rb(a, a_c);
		ft_putstr("rb\n");
		j--;
	}
	a_c = pb(a, a_c, i);
	ft_putstr("pb\n");
	return (a_c);
}

int		ra_rrb(int element, int *a, int a_c, int i)
{
	int j;

	j = pos_sm(a, a_c, element);
	while (element > a_c)
	{
		ra(a, a_c, i);
		ft_putstr("ra\n");
		element--;
	}
	while (j < a_c)
	{
		rrb(a, a_c);
		ft_putstr("rrb\n");
		j++;
	}
	a_c = pb(a, a_c, i);
	ft_putstr("pb\n");
	return (a_c);
}

int		rra_rb(int element, int *a, int a_c, int i)
{
	int j;

	j = pos_sm(a, a_c, element);
	while (element < i)
	{
		rra(a, a_c, i);
		ft_putstr("rra\n");
		element++;
	}
	while (j > 0)
	{
		rb(a, a_c);
		ft_putstr("rb\n");
		j--;
	}
	a_c = pb(a, a_c, i);
	ft_putstr("pb\n");
	re
}
