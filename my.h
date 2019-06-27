/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** my.h
*/

typedef struct cipher_s {
    int keylen;
    int msglen;
    int *mat4;
    int *mat9;
    int *mat16;
    float *inv4;
    float *inv9;
} cipher_t;

typedef struct mat4_s {
    int i;
    int j;
    int a;
    int b;
} mat4_t;

typedef struct mat9_s {
    int i;
    int j;
    int k;
    int a;
    int b;
    int c;
} mat9_t;

void    displayinv_9(cipher_t *cipher);
void    prepare_matrixinv9(char *av, cipher_t *cipher);
void    prepare_matrixinv4(char *av, cipher_t *cipher);
void    displayinv_4(cipher_t *cipher);
void    calcul_4(cipher_t *cipher, char *av);
void    calcul_9(cipher_t *cipher, char *av);
int     calcul_16(cipher_t *cipher, char *av);
void    display_4(cipher_t *cipher);
void    display_9(cipher_t *cipher);
void    display_16(cipher_t *cipher);
void    prepare_matrix4(char *av, cipher_t *cipher);
void    prepare_matrix9(char *av, cipher_t *cipher);
void    prepare_matrix16(char *av, cipher_t *cipher);
int     my_put_nbr(int nb);
int     decrypt(char **argv, cipher_t *cipher);
int     encrypt(char **argv, cipher_t *cipher);
int     error_management(int ac, char **argv);
void    display_h(void);
int     my_getnbr(char  const *str);
void    my_putchar(char n);
int     my_putstr(char const *str);
int     my_strcmp(char const *s1, char const *s2);