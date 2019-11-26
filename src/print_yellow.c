/*
** PERSONAL PROJECT, 2019
** libcolors
** File description:
** print yellow
*/

#include "../libcolors.h"

unsigned short my_putstr(char const *str);
void print_yellowdefault(char const *s);

static void print_yellownegative(char const *s)
{
    my_putstr("\033[7;33m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_yellowunderlined(char const *s)
{
    my_putstr("\033[4;33m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_yellowitalic(char const *s)
{
    my_putstr("\033[3;33m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_yellowbold(char const *s)
{
    my_putstr("\033[1;33m");
    my_putstr(s);
    my_putstr("\033[0m");
}

void print_yellow(char const *s, int id)
{
    switch (id) {
    case BOLD :
        print_yellowbold(s);
        break;
    case ITALIC :
        print_yellowitalic(s);
        break;
    case UNDERLINED :
        print_yellowunderlined(s);
        break;
    case NEGATIVE :
        print_yellownegative(s);
        break;
    default :
        print_yellowdefault(s);
        break;
    }
}
