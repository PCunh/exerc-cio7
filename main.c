#include <stdio.h>
#include <stdlib.h>
#include "ordenar.h"

int main() {
    int quantidade;
    printf("Quantas pessoas deseja inserir? ");
    scanf("%d", &quantidade);

    struct Pessoa *pessoas = malloc(quantidade * sizeof(struct Pessoa));
    if (pessoas == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Solicita ao usuário que insira os dados das pessoas
    for (int i = 0; i < quantidade; ++i) {
        printf("Nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);
        printf("Idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);
    }

    printf("\nPessoas antes da ordenacao por idade:\n");
    for (int i = 0; i < quantidade; ++i) {
        printf("%s, %d anos\n", pessoas[i].nome, pessoas[i].idade);
    }

    ordenarPorIdade(pessoas, quantidade);

    printf("\nPessoas depois da ordenacao por idade:\n");
    for (int i = 0; i < quantidade; ++i) {
        printf("%s, %d anos\n", pessoas[i].nome, pessoas[i].idade);
    }

    free(pessoas);
    return 0;
}
