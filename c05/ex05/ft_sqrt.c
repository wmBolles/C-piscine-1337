/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:27:43 by wabolles          #+#    #+#             */
/*   Updated: 2023/07/25 11:47:54 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		x;
	int		y;

	x = nb;
	y = (nb / 2) + (2 >> 1);
	while (y < x)
	{
		x = y;
		y = (x + nb / x) / 2;
	}
	if (x * x == nb)
		return (x);
	else
		return (0x0);
}