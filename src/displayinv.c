/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** displayinv.c
*/

#include "../my.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void    displayinv_4(cipher_t *cipher)
{
    float de;
    float a = cipher->inv4[0] * cipher->inv4[2];
    float b = cipher->inv4[1] * cipher->inv4[3];
    de = a - b;
    if (de == 0)
        exit (84);
    my_putstr("Key matrix:\n");
    printf("%.g\t%.3g\n", cipher->inv4[3]/de, cipher->inv4[2]/(-de));
    printf("%.3g\t%.3g\n", cipher->inv4[1]/de, cipher->inv4[0]/de);
    my_putstr("\nDecrypted message:\n");
}