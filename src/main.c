#include <stdio.h>
#include "include/str_read.h"

int main() {
    char nome[50];
    char curso[50];

    str_read(nome, sizeof(nome), "Digite seu nome: ");
    str_read(curso, sizeof(curso), "Digite o curso: ");

    printf("Aluno: %s\nCurso: %s\n", nome, curso);
    return 0;
}

