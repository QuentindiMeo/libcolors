/*
** PERSONAL PROJECT, 2019
** libcolors
** File description:
** print green
*/

#include "../libcolors.h"

unsigned short my_putstr(char const *str);
void print_greendefault(char const *s);

static void print_greennegative(char const *s)
{
    my_putstr("\033[7;32m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_greenunderlined(char const *s)
{
    my_putstr("\033[4;32m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_greenitalic(char const *s)
{
    my_putstr("\033[3;32m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_greenbold(char const *s)
{
    my_putstr("\033[1;32m");
    my_putstr(s);
    my_putstr("\033[0m");
}

void print_green(char const *s, int id)
{
    switch (id) {
    case BOLD :
        print_greenbold(s);
        break;
    case ITALIC :
        print_greenitalic(s);
        break;
    case UNDERLINED :
        print_greenunderlined(s);
        break;
    case NEGATIVE :
        print_greennegative(s);
        break;
    default :
        print_greendefault(s);
        break;
    }
}
