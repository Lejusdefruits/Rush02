/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejusdefruits <lejusdefruits@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 01:07:32 by lejusdefrui       #+#    #+#             */
/*   Updated: 2025/07/26 01:50:06 by lejusdefrui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_utils.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(ft_strlen(src) + 1);
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str || !str[0])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char *str)
{
	int		i;
	int		start;
	int		end;
	char	*trimmed;

	i = 0;
	start = 0;
	end = ft_strlen(str) - 1;
	while (str[start] == ' ' || (str[start] >= 9 && str[start] <= 13))
		start++;
	while (end > start && (str[end] == ' '
			|| (str[end] >= 9 && str[end] <= 13)))
		end--;
	trimmed = malloc(end - start + 2);
	if (!trimmed)
		return (NULL);
	while (start <= end)
		trimmed[i++] = str[start++];
	trimmed[i] = '\0';
	return (trimmed);
}
