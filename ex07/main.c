/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:13:18 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/09/30 13:43:25 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
	return (0);
}