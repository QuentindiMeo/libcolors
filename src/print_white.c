/*
** PERSONAL PROJECT, 2019
** libcolors
** File description:
** print white
*/

#include "../libcolors.h"

unsigned short my_putstr(char const *str);
void print_whitedefault(char const *s);

static void print_whitenegative(char const *s)
{
    my_putstr("\033[7m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_whiteunderlined(char const *s)
{
    my_putstr("\033[4m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_whiteitalic(char const *s)
{
    my_putstr("\033[3m");
    my_putstr(s);
    my_putstr("\033[0m");
}

static void print_whitebold(char const *s)
{
    my_putstr("\033[1m");
    my_putstr(s);
    my_putstr("\033[0m");
}

void print_white(char const *s, int id)
{
    switch (id) {
    case BOLD :
        print_whitebold(s);
        break;
    case ITALIC :
        print_whiteitalic(s);
        break;
    case UNDERLINED :
        print_whiteunderlined(s);
        break;
    case NEGATIVE :
        print_whitenegative(s);
        break;
    default :
        my_putstr(s);
        break;
    }
}
