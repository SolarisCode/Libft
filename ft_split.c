/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:32:19 by melkholy          #+#    #+#             */
/*   Updated: 2022/05/12 21:46:49 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wcount(const char *str, char c)
{
	size_t	found;

	found = 0;
	while (*str)
	{
		if (*str != c)
		{
			while (*str != c && *str)
				str ++;
			found ++;
		}
		else
			str ++;
	}
	return (found);
}

char	*ft_divide(const char *str, char c)
{
	char	*dev;
	size_t	count;

	count = 0;
	while (str[count] != c && str[count])
		count ++;
	dev = (char *)malloc(count + 1);
	ft_strlcpy(dev, str, count + 1);
	return (dev);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**split;
	size_t	index;
	size_t	rep;

	count = 0;
	index = 0;
	if (!s)
		return (NULL);
	rep = ft_wcount(s, c);
	split = (char **)malloc((rep + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (index < rep)
	{
		split[index] = ft_divide(s + count, c);
		count += ft_strlen(split[index]) + 1;
		if (*(split[index]))
			index ++;
		else
			free(split[index]);
	}
	split[index] = NULL;
	return (split);
}
