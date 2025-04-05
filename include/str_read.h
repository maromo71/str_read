#ifndef STR_READ_H
#define STR_READ_H

#include <stddef.h>

/**
 * @brief Lê uma string da entrada padrão com segurança, usando fgets.
 *
 * @param buffer Ponteiro para o buffer de destino.
 * @param tamanho Tamanho do buffer, incluindo o '\0'.
 * @param mensagem Texto exibido antes da leitura.
 */
void str_read(char *buffer, size_t tamanho, const char *mensagem);

#endif // STR_READ_H
