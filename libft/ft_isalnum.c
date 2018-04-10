/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azavrazh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 18:34:48 by azavrazh          #+#    #+#             */
/*   Updated: 2017/12/07 18:34:50 by azavrazh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if ((c <= 57 && c >= 48) || (c <= 90 && c >= 65) ||
			(c <= 122 && c >= 97))
		return (1);
	else
		return (0);
}