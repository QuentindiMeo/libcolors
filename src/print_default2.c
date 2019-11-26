/*
** PERSONAL PROJECT, 2019
** libcolors
** File description:
** print default 2
*/

unsigned short my_putstr(char const *str);

void print_cyandefault(char const *s)
{
    my_putstr("\033[0;36m");
    my_putstr(s);
    my_putstr("\033[0m");
}

void print_magentadefault(char const *s)
{
    my_putstr("\033[0;35m");
    my_putstr(s);
    my_putstr("\033[0m");
}

void print_bluedefault(char const *s)
{
    my_putstr("\033[0;34m");
    my_putstr(s);
    my_putstr("\033[0m");
}
