/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:13:52 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/05/08 18:30:08 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sprint(char *str)
{
	if (str == NULL)
		return (write(1, "(null)", 6));
	else
		return (ft_putstr(str));
}

static int	ft_pprint(void *p)
{
	if (p == NULL)
		return (write(1, "(nil)", 5));
	else
		return (ft_putpointer((unsigned long)p));
}

static int	ft_spellbook(va_list args, const char *form)
{
	int	bytes_printed;

	if (*form == '%')
		return (ft_putchar('%'));
	if (*form == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (*form == 'i' || *form == 'd')
		return (ft_putnbr(va_arg(args, int)));
	if (*form == 'u')
		return (ft_putnbr(va_arg(args, unsigned int)));
	if (*form == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int),
				"0123456789abcdef"));
	if (*form == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int),
				"0123456789ABCDEF"));
	if (*form == 'p')
		return (ft_pprint(va_arg(args, void *)));
	if (*form == 's')
		return (ft_sprint(va_arg(args, char *)));
	bytes_printed = write(1, "%%", 1);
	bytes_printed += write(1, form, 1);
	return (bytes_printed);
}

/**
 * @brief Produces output according to a format.
 *
 * This function sends formatted output to stdout, using the format specified
 * in the 'form' parameter.
 * 
 * Accepted formats:
 * - %c: Character
 * - %s: String
 * - %p: Pointer
 * - %d: Integer
 * - %i: Integer
 * - %u: Unsigned integer
 * - %x: Hexadecimal integer
 * - %X: Uppercase hexadecimal integer
 * - %%: Percent sign
 *
 * @param form The format string that specifies how subsequent arguments are
 * converted for output. It contains ordinary characters (which are copied
 * unchanged to the output) and format specifiers (which define how to format
 * the arguments).
 * @param ... The variable arguments to be formatted and printed according to
 * the format string.
 *
 * @return The total number of characters written,
 * 	or a negative value if an
 * output error occurs.
 */
int	ft_printf(const char *form, ...)
{
	va_list	args;
	int		bytes_printed;
	int		i;

	va_start(args, form);
	bytes_printed = 0;
	i = 0;
	while (form[i])
	{
		if (form[i] == '%')
			bytes_printed += ft_spellbook(args, (form + ++i));
		else
			bytes_printed += write(1, (form + i), 1);
		i++;
	}
	va_end(args);
	return (bytes_printed);
}
