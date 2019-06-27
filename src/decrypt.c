/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** decrypt.c
*/

#include "../my.h"
#include <string.h>
#include <stdlib.h>

int decrypt_4(char **av, cipher_t *cipher)
{
    prepare_matrixinv4(av[2], cipher);
    displayinv_4(cipher);
    return (0);
}

int     decrypt(char **argv, cipher_t *cipher)
{
    cipher->keylen = strlen(argv[2]);

    if (cipher->keylen <= 4)
        decrypt_4(argv, cipher);
    if (cipher->keylen > 4 && cipher->keylen <= 9)
        exit (84);
    if (cipher->keylen > 9 && cipher->keylen <= 16)
        exit (84);
    if (cipher->keylen > 16)
        return (0);
    return (0);
}