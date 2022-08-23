/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng <mcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 22:28:51 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/23 22:29:30 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_print_comb2(void)
{
        int     a;
        int     b;

        a = 0;
        b = 1;
        while (a < 99)
        {
                b = a + 1;
                while (b < 100)
                {
                        ft_putchar((a / 10) + '0');
                        ft_putchar((a % 10) + '0');
                        write(1," ",1);
                        ft_putchar((b / 10) + '0');
                        ft_putchar((b % 10) + '0');
                        if (!(a == 98 && b == 99))
                        {
                                write(1, ", ", 2);
                        }
                        b++;
                }
                a++;
        }

}

int main(void)
{
        ft_print_comb2();
}
