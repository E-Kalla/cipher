/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** encrypt.c
*/

#include "../my.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int crypt_16(char **av, cipher_t *cipher)
{
    prepare_matrix16(av[2], cipher);
    display_16(cipher);
    free(cipher->mat16);
    return (0);
}

int crypt_9(char **av, cipher_t *cipher)
{
    prepare_matrix9(av[2], cipher);
    display_9(cipher);
    calcul_9(cipher, av[1]);
    free(cipher->mat9);
    return (0);
}

int crypt_4(char **av, cipher_t *cipher)
{
    prepare_matrix4(av[2], cipher);
    display_4(cipher);
    calcul_4(cipher, av[1]);
    free(cipher->mat4);
    return (0);
}

int encrypt(char **argv, cipher_t *cipher)
{
    cipher->keylen = strlen(argv[2]);

    if (cipher->keylen <= 4)
        crypt_4(argv, cipher);
    if (cipher->keylen > 4 && cipher->keylen <= 9)
        crypt_9(argv, cipher);
    if (cipher->keylen > 9 && cipher->keylen <= 16)
        crypt_16(argv, cipher);
    if (cipher->keylen > 16)
        return (0);
    return (0);
}