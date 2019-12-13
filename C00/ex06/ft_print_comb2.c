/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 20:47:15 by jlopes-b          #+#    #+#             */
/*   Updated: 2019/12/03 15:04:08 by jlopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_valor2(char *a, char *b, char *c, char *d)
{
	*b = *b + 1;
	*c = *a;
	*d = *b + 1;
}

void	ft_valor(char *i, char *j, char *k, char *l)
{
	*i = *i + 1;
	*j = '0';
	*k = *i;
	*l = *j + 1;
}

void	ft_escrever(char e, char f, char g, char *h)
{
	write(1, &e, 1);
	write(1, &f, 1);
	write(1, " ", 1);
	write(1, &g, 1);
	write(1, &*h, 1);
	if (!(e == '9' && f == '8'))
		write(1, ", ", 2);
	*h = *h + 1;
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
					ft_escrever(a, b, c, &d);
				c++;
				d = '0';
			}
			ft_valor2(&a, &b, &c, &d);
		}
		ft_valor(&a, &b, &c, &d);
	}
}
