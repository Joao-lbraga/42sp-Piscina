/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 15:39:00 by jlopes-b          #+#    #+#             */
/*   Updated: 2019/12/09 16:02:04 by jlopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int i;
	int return_num;

	i = 0;
	return_num = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9' && return_num == 1)
		{
			return_num = 1;
		}
		else
			return_num = 0;
		i++;
	}
	return (return_num);
}
