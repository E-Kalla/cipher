/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** main.c
*/

#include "../my.h"

int     check_opt(char *argv)
{
    if (my_strcmp(argv, "-h") == 0)
        display_h();
    return (0);
}

int     main(int ac, char **argv)
{
    cipher_t cipher;

    if (ac == 2) {
        check_opt(argv[1]);
    }
    error_management(ac, argv);
    if (argv[3][0] == '0') {
        encrypt(argv, &cipher);
    } else {
        decrypt (argv, &cipher);
    }
    return (0);
}