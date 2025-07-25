/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejusdefruits <lejusdefruits@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 01:07:29 by lejusdefrui       #+#    #+#             */
/*   Updated: 2025/07/26 01:17:28 by lejusdefrui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_UTILS_H
# define STRING_UTILS_H

int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
int		ft_is_numeric(char *str);
char	*ft_strtrim(char *str);

#endif
