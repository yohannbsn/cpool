/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** printf
*/

#ifndef PRINTF_H_
#define PRINTF_H_
#include <stdarg.h>

int funct_i_d(va_list List);
int funct_c(va_list List);
int funct_s(va_list List);
int funct_u(va_list List);
int funct_o(va_list List);
void my_putchar(char c);
int my_putuint(unsigned int nb);
int my_put_nbr(int nb);
int my_putstr(char const *str);
void my_putchar(char c);
int my_putdectoct(int nb);



#endif /* !PRINTF_H_ */
