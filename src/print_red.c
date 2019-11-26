/*
** PERSONAL PROJECT, 2019
** libcolors
** File description:
** print red
*/

#include "../libcolors.h"

unsigned short my_putstr(char const *str);
void print_reddefault(char const *s);

static void print_rednegative(char const *s)
{
    my_putstr("\033[7;31m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_redunderlined(char const *s)
{
    my_putstr("\033[4;31m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_reditalic(char const *s)
{
    my_putstr("\033[3;31m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_redbold(char const *s)
{
    my_putstr("\033[1;31m");
    my_putstr(s);
    my_putstr("\033[0m");
}

void print_red(char const *s, int id)
{
    switch (id) {
    case BOLD :
        print_redbold(s);
        break;
    case ITALIC :
        print_reditalic(s);
        break;
    case UNDERLINED :
        print_redunderlined(s);
        break;
    case NEGATIVE :
        print_rednegative(s);
        break;
    default :
        print_reddefault(s);
        break;
    }
}
