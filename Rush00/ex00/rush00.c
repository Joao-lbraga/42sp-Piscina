/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamilo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 22:07:40 by rcamilo-          #+#    #+#             */
/*   Updated: 2019/11/24 18:46:54 by rcamilo-         ###   ########.fr       */
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

void	ft_line(int length)
{
	ft_putchar('o');
	if (length > 1)
	{
		ft_putcharn('-', length - 2);
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	ft_column(int length, int height)
{
	while (height > 2)
	{
		ft_putchar('|');
		if (length > 1)
		{
			ft_putcharn(' ', length - 2);
			ft_putchar('|');
		}
		ft_putchar('\n');
		height--;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_line(x);
		ft_column(x, y);
		if (y > 1)
			ft_line(x);
	}
	else
		write(1, "Erro, os valores devem ser maiores que 0.\n", 42);
}
