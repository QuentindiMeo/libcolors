/*
** PERSONAL PROJECT, 2019
** libcolors
** File description:
** print magenta
*/

#include "../libcolors.h"

unsigned short my_putstr(char const *str);
void print_magentadefault(char const *s);

static void print_magentanegative(char const *s)
{
    my_putstr("\033[7;35m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_magentaunderlined(char const *s)
{
    my_putstr("\033[4;35m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_magentaitalic(char const *s)
{
    my_putstr("\033[3;35m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_magentabold(char const *s)
{
    my_putstr("\033[1;35m");
    my_putstr(s);
    my_putstr("\033[0m");
}

void print_magenta(char const *s, int id)
{
    switch (id) {
    case BOLD :
        print_magentabold(s);
        break;
    case ITALIC :
        print_magentaitalic(s);
        break;
    case UNDERLINED :
        print_magentaunderlined(s);
        break;
    case NEGATIVE :
        print_magentanegative(s);
        break;
    default :
        print_magentadefault(s);
        break;
    }
}
