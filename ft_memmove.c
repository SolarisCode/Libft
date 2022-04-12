/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solariscode <solariscode@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:48:08 by melkholy          #+#    #+#             */
/*   Updated: 2022/02/13 14:21:03 by solariscode      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*str1;
	char	*str2;

	if (!dest && !src)
		return (NULL);
	str1 = (char *)dest;
	str2 = (char *)src;
	count = 0;
	if (src < dest)
		while (n--)
			str1[n] = str2[n];
	else
	{
		while (count < n)
		{
			str1[count] = str2[count];
			count ++;
		}
	}
	return (dest);
}
