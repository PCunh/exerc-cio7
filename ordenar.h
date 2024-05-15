#ifndef ORDENAR_H
#define ORDENAR_H

struct Pessoa {
    char nome[50];
    int idade;
};

int compararIdade(const void *a, const void *b);
void ordenarPorIdade(struct Pessoa *pessoas, int tamanho);

#endif