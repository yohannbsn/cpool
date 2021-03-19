/*
** EPITECH PROJECT, 2020
** proto
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_
#include <stdarg.h>

void my_put_nbr(va_list *ap);
void my_putchar(char c);
void my_putstr(char const *str);
void print_flag(char *str, int i, va_list *ap);
void my_printchar(va_list *ap);
void my_printstr(va_list *ap);
char *my_revstr(char *str);
int my_strlen(char const *str);
void my_printunsigned(va_list *ap);
void my_printstroctal(va_list *ap);
void my_octal(va_list *ap);
void my_unsignbin(va_list *ap);
void my_hexa(va_list *ap);
void my_downhexa(va_list *ap);
void my_ptrhexa(va_list *ap);
void my_printpourcent(va_list *ap);
int my_printf(char *str, ...);
void my_putfloat(va_list *ap);
void my_putnbr(int nb);
char *my_strcat(char *dest, char const *src);
int my_getnbr(char const *str);


#endif /* !MY_H_ */
