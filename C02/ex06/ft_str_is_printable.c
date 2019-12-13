/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 17:35:07 by jlopes-b          #+#    #+#             */
/*   Updated: 2019/12/12 17:40:29 by jlopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;
	int return_num;

	i = 0;
	return_num = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~' && return_num == 1)
		{
			return_num = 1;
		}
		else
			return_num = 0;
		i++;
	}
	return (return_num);
}
