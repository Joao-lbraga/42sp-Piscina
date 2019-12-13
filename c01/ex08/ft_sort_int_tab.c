/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 19:24:22 by jlopes-b          #+#    #+#             */
/*   Updated: 2019/12/09 21:06:22 by jlopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int k;
	int j;
	int x;

	size = size - 1;
	k = 1;
	while (k < size)
	{
		k++;
		j = 0;
		while (j < size)
		{
			if (tab[j] > tab[j + 1])
			{
				x = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = x;
			}
			j++;
		}
	}
}
