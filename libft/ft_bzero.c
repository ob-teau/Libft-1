/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 11:50:47 by daelee            #+#    #+#             */
/*   Updated: 2020/03/06 16:55:23 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                ft_bzero(void *b, size_t n)
{
    unsigned char   *dest;
    size_t          i;

    dest = b;
    i = 0;
    while(i++ < n)
        *dest++ = 0;
}