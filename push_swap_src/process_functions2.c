/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_functions2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 11:38:34 by ndlamini          #+#    #+#             */
/*   Updated: 2019/09/27 11:38:38 by ndlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int		pb_rb(int *a, int a_c, int i, int sm)
{
	int big;
	int ans;
	int ans2;
	int j;
	int pos;

	big = biggest(a, a_c);
	j = position_b(a, big, a_c);
	pos = a_c;
	while (sm != a[pos])
		pos++;
	ans = a_c - (j * 2);
	ans2 = (i - a_c) - ((pos - a_c) * 2);
	if (ans < 0 && ans2 < 0)
		a_c = rrr_function2(pos, a, a_c, i);
	else if (ans >= 0 && ans2 >= 0)
		a_c = rr_function2(pos, a, a_c, i);
	else if (ans >= 0 && ans2 < 0)
		a_c = rra_rb2(pos, a, a_c, i);
	else if (ans < 0 && ans2 >= 0)
		a_c = ra_rrb2(pos, a, a_c, i);
	return (a_c);
}
