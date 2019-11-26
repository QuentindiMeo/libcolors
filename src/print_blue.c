/*
** PERSONAL PROJECT, 2019
** libcolors
** File description:
** print blue
*/

#include "../libcolors.h"

unsigned short my_putstr(char const *str);
void print_bluedefault(char const *s);

static void print_bluenegative(char const *s)
{
    my_putstr("\033[7;34m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_blueunderlined(char const *s)
{
    my_putstr("\033[4;34m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_blueitalic(char const *s)
{
    my_putstr("\033[3;34m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_bluebold(char const *s)
{
    my_putstr("\033[1;34m");
    my_putstr(s);
    my_putstr("\033[0m");
}

void print_blue(char const *s, int id)
{
    switch (id) {
    case BOLD :
        print_bluebold(s);
        break;
    case ITALIC :
        print_blueitalic(s);
        break;
    case UNDERLINED :
        print_blueunderlined(s);
        break;
    case NEGATIVE :
        print_bluenegative(s);
        break;
    default :
        print_bluedefault(s);
        break;
    }
}
