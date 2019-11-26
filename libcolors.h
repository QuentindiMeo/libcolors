/*
** PERSONAL PROJECT, 2019
** libcolors
** File description:
** my colors library headers
*/

#ifndef LIBCOLORS_H_
#define LIBCOLORS_H_

typedef enum {
    DEF = 0,
    BOLD = 1,
    ITALIC = 3,
    UNDERLINED = 5,
    NEGATIVE = 7,
} effect_colors_t;

typedef enum {
    RED = 31,
    GREEN = 32,
    YELLOW = 33,
    BLUE = 34,
    MAGENTA = 35,
    CYAN = 36,
} color_colors_t;

typedef unsigned int uint;
typedef unsigned char uchar;

unsigned short my_putchar(char const);
unsigned short my_putstr(char const *);

#endif
