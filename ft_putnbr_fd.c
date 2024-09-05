/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:02:32 by simon             #+#    #+#             */
/*   Updated: 2024/09/06 01:20:00 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int		len;

	len = 0;
	if (n == INT_MIN)
	{
		return (ft_putstr_fd("-2147483648", fd));
	}
	if (n < 0)
	{
		len += ft_putchar_fd('-', 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		n = n % 10;
	}
	if (n <= 9)
	{
		len += ft_putchar_fd(n + 48, 1);
	}
	return (len);
}
