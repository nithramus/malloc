/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bandre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:55:55 by bandre            #+#    #+#             */
/*   Updated: 2016/11/08 19:35:36 by bandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	unsigned int i;

	if (str && f)
	{
		i = 0;
		while (str[i])
		{
			(*f)(i, &str[i]);
			i++;
		}
	}
}
