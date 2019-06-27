/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** display_h.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../my.h"

void    display_16(cipher_t *cipher)
{
    int nb[16];

    for (int i = 0; i <= 15; i += 1) {
        nb[i] = cipher->mat16[i];
    }
    my_putstr("Key matrix:\n");
    printf("%d\t%d\t%d\t%d\n", nb[0], nb[1], nb[2], nb[3]);
    printf("%d\t%d\t%d\t%d\n", nb[4], nb[5], nb[6], nb[7]);
    printf("%d\t%d\t%d\t%d\n", nb[8], nb[9], nb[10], nb[11]);
    printf("%d\t%d\t%d\t%d\n", nb[12], nb[13], nb[14], nb[15]);
    my_putstr("\nEncrypted message:\n");
}

void    display_9(cipher_t *cipher)
{
    my_putstr("Key matrix:\n");
    printf("%d\t%d\t%d\n", cipher->mat9[0], cipher->mat9[1], cipher->mat9[2]);
    printf("%d\t%d\t%d\n", cipher->mat9[3], cipher->mat9[4], cipher->mat9[5]);
    printf("%d\t%d\t%d\n", cipher->mat9[6], cipher->mat9[7], cipher->mat9[8]);
    my_putstr("\nEncrypted message:\n");
}

void    display_4(cipher_t *cipher)
{
    my_putstr("Key matrix:\n");
    printf("%d\t%d\n", cipher->mat4[0], cipher->mat4[1]);
    printf("%d\t%d\n", cipher->mat4[2], cipher->mat4[3]);
    my_putstr("\nEncrypted message:\n");
}

void    display_h(void)
{
    printf("USAGE\n");
    printf("    ./103cipher message key flag\n\n");
    printf("DESCRIPTION\n");
    printf("    message     a message, made of ASCII characters\n");
    printf("    key         the encryption key, made of ASCII characters\n");
    printf("    flag        0 for the message to be encrypted, 1 to be decrypted\n");
    exit (0);
}