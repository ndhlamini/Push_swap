/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:12:53 by ndlamini          #+#    #+#             */
/*   Updated: 2019/09/27 12:13:17 by ndlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		biggest_in_b(int *a, int a_c)
{
	int big;
	int j;

	big = a[0];
	j = 1;
	while (j < a_c)
	{
		if (big < a[j])
			big = a[j];
		j++;
	}
	return (big);
}

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

int		check_sort_a(int *a, int a_c, int i)
{
	int j;
	int big_b;

	j = a_c;
	big_b = biggest_in_b(a, a_c);
	if (a_c != 0)
	{
		while (j < i)
		{
			if (a[j] > a[j + 1])
				return (0);
			j++;
		}
		if (a[a_c] < big_b)
			return (0);
	}
	return (1);
}
