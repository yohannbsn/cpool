/*
** EPITECH PROJECT, 2020
** include
** File description:
** my
*/

#include <stdarg.h>

#ifndef MY_H_
#define MY_H_

int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char  const *str);
int my_isneg(int n);
int my_is_prime(int nb);
void my_putchar(char c);
int my_put_nbr(int nb);
void my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char  const *s1, char  const *s2);
char *my_strcpy(char *dest, char  const *src);
char *my_strdup(char const *src);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char  const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char  const *s1, char  const *s2 , int n);
char *my_strncpy(char *dest, char  const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
int verification_prev_letter(char *str, int i);
int verification_prevchar(char *str, int i);
char verif_char(char *str, int i);
int my_strlen2(char const *str);
int my_printf(char *str, ...);
void print_flag(char *str, int i, va_list *ap);
void my_printchar(va_list *ap);
void my_printstr(va_list *ap);
void my_printunsigned(va_list *ap);
void printbase_octal(int c);
void my_printstroctal(va_list *ap);
void my_octal(va_list *ap);
void my_printunsigned(va_list *ap);
void my_unsignbin(va_list *ap);
void my_hexa(va_list *ap);
void my_downhexa(va_list *ap);
void my_downhexa2(unsigned int  downhexa);
void my_ptrhexa(va_list *ap);
void my_printpourcent(va_list *ap);
void my_putfloat(va_list *ap);

#endif /* !MY_H_ */