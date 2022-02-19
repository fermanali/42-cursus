/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:39:38 by farpacik          #+#    #+#             */
/*   Updated: 2022/02/06 14:46:19 by farpacik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t tahsis, size_t size)
{
	size_t	i;
	void	*r;

	i = tahsis * size;
	r = malloc(i);
	if (!r)
		return (NULL);
	ft_bzero(r, i);
	return (r);
}
/* baytlara size parametre değeri kadar
 *  num parametre değeri kadar bellek bloğu tahsis eder. 
 * belleğin tamamına 0 değeri ile doldurulur */
