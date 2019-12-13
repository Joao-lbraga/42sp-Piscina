/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 12:54:51 by jlopes-b          #+#    #+#             */
/*   Updated: 2019/12/11 20:29:59 by jlopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;
	int return_num;

	i = 0;
	return_num = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z' && return_num == 1)
		{
			return_num = 1;
		}
		else if (str[i] >= 'a' && str[i] <= 'z' && return_num == 1)
		{
			return_num = 1;
		}
		else
			return_num = 0;
		i++;
	}
	return (return_num);
}
