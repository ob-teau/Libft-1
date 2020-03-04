/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 21:05:35 by daelee            #+#    #+#             */
/*   Updated: 2020/03/04 20:34:26 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *newstr;
    int s1_len;
    int s2_len;

    if (!(s1) && !(s2))
        return (NULL);
    else if (!(s1) || !(s2))
        return (!(s1) ? ft_strdup(s2) : ft_strdup(s1));
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    if (!(newstr = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1))))
        return (NULL);
    ft_strlcpy(newstr, s1, s1_len + 1);
    ft_strlcat(newstr + (s1_len), s2, s2_len + 1);
    return (newstr);
}

int     main(void)
{
    char *s1 = "02345";
    char *s2 = "67891";
    printf("ft : %s\n", ft_strjoin(s1, s2));
    return (0);
}