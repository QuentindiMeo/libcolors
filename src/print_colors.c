/*
** PERSONAL PROJECT, 2019
** libcolors
** File description:
** print colors
*/

#include "../libcolors.h"

void print_cyan(char const *s, int id);
void print_magenta(char const *s, int id);
void print_blue(char const *s, int id);
void print_yellow(char const *s, int id);
void print_green(char const *s, int id);
void print_red(char const *s, int id);
void print_white(char const *s, int id);

static void print_color2(char const *s, int color, int id)
{
    switch (color) {
    case BLUE :
        print_blue(s, id);
        break;
    case MAGENTA :
        print_magenta(s, id);
        break;
    case CYAN :
        print_cyan(s, id);
        break;
    default :
        print_white(s, id);
        break;
    }
}

void print_color(char const *s, int color, int id)
{
    switch (color) {
    case RED :
        print_red(s, id);
        break;
    case GREEN :
        print_green(s, id);
        break;
    case YELLOW :
        print_yellow(s, id);
        break;
    default :
        print_color2(s, color, id);
        break;
    }
}
