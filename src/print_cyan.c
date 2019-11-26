/*
** PERSONAL PROJECT, 2019
** libcolors
** File description:
** print cyan
*/

#include "../libcolors.h"

unsigned short my_putstr(char const *str);
void print_cyandefault(char const *s);

static void print_cyannegative(char const *s)
{
    my_putstr("\033[7;36m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_cyanunderlined(char const *s)
{
    my_putstr("\033[4;36m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_cyanitalic(char const *s)
{
    my_putstr("\033[3;36m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_cyanbold(char const *s)
{
    my_putstr("\033[1;36m");
    my_putstr(s);
    my_putstr("\033[0m");
}

void print_cyan(char const *s, int id)
{
    switch (id) {
    case BOLD :
        print_cyanbold(s);
        break;
    case ITALIC :
        print_cyanitalic(s);
        break;
    case UNDERLINED :
        print_cyanunderlined(s);
        break;
    case NEGATIVE :
        print_cyannegative(s);
        break;
    default :
        print_cyandefault(s);
        break;
    }
}
