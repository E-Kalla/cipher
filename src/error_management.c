/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** error_management.c
*/

#include "../my.h"
#include <stdlib.h>
#include <stdio.h>

int     check_av1(char *av)
{
    for (int i = 0; av[i]; i += 1) {
        if ((av[i] < '0' || av[i] > '9') && av[i] != ' ')
            exit (84);
    }
    return (0);
}

int     check_av0(char *av)
{
    for (int i = 0; av[i]; i += 1) {
        if (av[i] >= '0' && av[i] <= '9')
            exit (84);
    }
    return (0);
}

int     error_management(int ac, char **argv)
{
    if (ac != 4)
        exit (84);
    if (argv[3][0] == '1')
        check_av1(argv[1]);
    if (argv[3][0] == '0')
        check_av0(argv[1]);
    for (int j = 0; argv[2][j]; j += 1) {
        if (argv[2][j] >= '0' && argv[2][j] <= '9')
            exit (84);
    }
    if (argv[3][0] != '0' && argv[3][0] != '1')
        exit (84);
    return (0);
}