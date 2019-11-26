/*
** PERSONAL PROJECT, 2019
** libcolors
** File description:
** print default
*/

unsigned short my_putstr(char const *str);

void print_yellowdefault(char const *s)
{
    my_putstr("\033[0;33m");
    my_putstr(s);
    my_putstr("\033[0m");
}

void print_greendefault(char const *s)
{
    my_putstr("\033[0;32m");
    my_putstr(s);
    my_putstr("\033[0m");
}

void print_reddefault(char const *s)
{
    my_putstr("\033[0;31m");
    my_putstr(s);
    my_putstr("\033[0m");
}
