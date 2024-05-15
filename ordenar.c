#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ordenar.h"

int compararIdade(const void *a, const void *b) {
    struct Pessoa *pessoaA = (struct Pessoa *)a;
    struct Pessoa *pessoaB = (struct Pessoa *)b;
    return (pessoaA->idade - pessoaB->idade);
}

void ordenarPorIdade(struct Pessoa *pessoas, int tamanho) {
    qsort(pessoas, tamanho, sizeof(struct Pessoa), compararIdade);
}
