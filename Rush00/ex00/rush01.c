/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamilo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 22:07:40 by rcamilo-          #+#    #+#             */
/*   Updated: 2019/11/24 19:44:31 by rcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putcharn(char c, int n)
{
	while (n > 0)
	{
		ft_putchar(c);
		n--;
	}
}

void	ft_first_line(int x)
{
	ft_putchar('/');
	if (x > 1)
	{
		ft_putcharn('*', x - 2);
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	ft_last_line(int x)
{
	ft_putchar('\\');
	if (x > 1)
	{
		ft_putcharn('*', x - 2);
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	ft_column(int x, int y)
{
	while (y > 2)
	{
		ft_putchar('*');
		if (x > 1)
		{
			ft_putcharn(' ', x - 2);
			ft_putchar('*');
		}
		ft_putchar('\n');
		y--;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_first_line(x);
		ft_column(x, y);
		if (y > 1)
			ft_last_line(x);
	}
	else
		write(1, "Erro, os valores devem ser maiores que 0.\n", 42);
}
