/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** prepare_tab.c
*/

#include "../my.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void prepare_matrixinv4(char *av, cipher_t *cipher)
{
    cipher->inv4 = malloc(sizeof(float) * (4 + 1));
    for (int i = 0; i < cipher->keylen; i += 1) {
        cipher->inv4[i] = av[i];
    }
    if (cipher->keylen < 4) {
        while (cipher->keylen < 4) {
            cipher->inv4[cipher->keylen] = 0;
            cipher->keylen += 1;
        }
    }
}

void prepare_matrix4(char *av, cipher_t *cipher)
{
    cipher->mat4 = malloc(sizeof(int) * (4 + 1));
    for (int i = 0; i < cipher->keylen; i += 1) {
        cipher->mat4[i] = av[i];
    }
    if (cipher->keylen < 4) {
        while (cipher->keylen < 4) {
            cipher->mat4[cipher->keylen] = 0;
            cipher->keylen += 1;
        }
    }
}

void prepare_matrix9(char *av, cipher_t *cipher)
{
    cipher->mat9 = malloc(sizeof(int) * (9 + 1));
    for (int i = 0; i < cipher->keylen; i += 1) {
        cipher->mat9[i] = av[i];
    }
    if (cipher->keylen < 9) {
        while (cipher->keylen < 9) {
            cipher->mat9[cipher->keylen] = 0;
            cipher->keylen += 1;
        }
    }
}

void prepare_matrix16(char *av, cipher_t *cipher)
{
    cipher->mat16 = malloc(sizeof(int) * (16 + 1));
    for (int i = 0; i < cipher->keylen; i += 1) {
        cipher->mat16[i] = av[i];
    }
    if (cipher->keylen < 16) {
        while (cipher->keylen < 16) {
            cipher->mat16[cipher->keylen] = 0;
            cipher->keylen += 1;
        }
    }
}