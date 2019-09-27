/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:14:00 by ndlamini          #+#    #+#             */
/*   Updated: 2019/09/27 12:14:07 by ndlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *a, int a_c, int i)
{
	if (a_c != i - 1)
		ft_swap(&a[a_c], &a[a_c + 1]);
}

void	sb(int *a, int a_c)
{
	if (a_c > 1)
		ft_swap(&a[0], &a[1]);
}

void	ss(int *a, int a_c, int i)
{
	sa(a, a_c, i);
	sb(a, a_c);
}

int		pa(int *a, int a_c)
{
	if (a_c > 1)
		rb(a, a_c);
	if (a_c != 0)
		a_c += -1;
	return (a_c);
}

int		pb(int *a, int a_c, int i)
{
	if (a_c < i - 1)
	{
		a_c++;
		if (a_c > 1)
			rrb(a, a_c);
	}
	return (a_c);
}
