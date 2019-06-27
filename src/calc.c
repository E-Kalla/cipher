/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** calc.c
*/

#include "../my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void secondcalcul_9(mat9_t *mat, cipher_t *cipher, char *av)
{
    if (mat->i < cipher->msglen) {
        mat->a = (av[mat->i] * cipher->mat9[0]) +
        (av[mat->k] * cipher->mat9[3]);
        mat->b = (av[mat->i] * cipher->mat9[1]) +
        (av[mat->k] * cipher->mat9[4]);
        mat->c = (av[mat->i] * cipher->mat9[2]) +
        (av[mat->k] * cipher->mat9[5]);
        printf(" %d %d %d", mat->a, mat->b, mat->c);
    }
    printf("\n");
}

void secondcalcul_4(mat4_t *mat, cipher_t *cipher, char *av)
{
    if (mat->i < cipher->msglen) {
        mat->a = av[mat->i] * cipher->mat4[0];
        mat->b = av[mat->i] * cipher->mat4[1];
        printf(" %d %d", mat->a, mat->b);
    }
    printf("\n");
}

void calcul_4(cipher_t *cipher, char *av)
{
    mat4_t mat;
    mat.i = 0;
    mat.j = 1;
    cipher->msglen = strlen(av);

    for (; mat.j < cipher->msglen; mat.j += 2) {
        mat.a = (av[mat.i] * cipher->mat4[0]) + (av[mat.j] * cipher->mat4[2]);
        mat.b = (av[mat.i] * cipher->mat4[1]) + (av[mat.j] * cipher->mat4[3]);
        printf("%d %d", mat.a, mat.b);
        if (mat.j <= cipher->keylen - 1)
            printf(" ");
        mat.i += 2;
    }
    secondcalcul_4(&mat, cipher, av);
}

void calcul_9(cipher_t *cipher, char *av)
{
    mat9_t mat;
    mat.i = 0;
    mat.k = 1;
    mat.j = 2;
    cipher->msglen = strlen(av);

    for (mat.j = 2; mat.j < cipher->msglen; mat.j += 3) {
        mat.a = (av[mat.i] * cipher->mat9[0]) + (av[mat.k] * cipher->mat9[3]) +
        (av[mat.j] * cipher->mat9[6]);
        mat.b = (av[mat.i] * cipher->mat9[1]) + (av[mat.k] * cipher->mat9[4]) +
        (av[mat.j] * cipher->mat9[7]);
        mat.c = (av[mat.i] * cipher->mat9[2]) + (av[mat.k] * cipher->mat9[5]) +
        (av[mat.j] * cipher->mat9[8]);
        printf("%d %d %d", mat.a, mat.b, mat.c);
        if (mat.j < cipher->msglen - 1)
            printf(" ");
        mat.i += 3;
        mat.k += 3;
    }
    secondcalcul_9(&mat, cipher, av);
}