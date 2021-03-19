/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** function
*/

#include <stdarg.h>
#include "./include/printf.h"

void	my_putchar_2(va_list list)
{
  my_putchar(va_arg(list, int));
}

void	my_putstr_2(va_list list)
{
  my_putstr(va_arg(list, char*));
}

void	my_put_nbr_bin_2(va_list list)
{
  my_put_nbr_bin(va_arg(list, int));
}

void	my_put_nbr_2(va_list list)
{
  my_put_nbr(va_arg(list, int));
}

void	my_put_nbr_hexa_2(va_list list)
{
  my_put_nbr_hexa(va_arg(list, int));
}