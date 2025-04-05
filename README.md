# str_read

Função `str_read` em C para leitura segura de strings via teclado, usando `fgets()` com remoção automática do caractere de nova linha `\n`.

---

## 🎯 Motivações

Esta função foi criada para **auxiliar estudantes em aulas introdutórias de programação em C**, com foco em:

- **Evitar o uso de funções inseguras**, como `gets()`, removida do padrão C11.
- Substituir `gets_s()`, que **não é suportada nativamente** por muitos compiladores, como Clang (macOS) e GCC.
- **Fornecer uma função simples, reutilizável e segura** para entrada de dados via teclado.
- Estimular **boas práticas de programação desde o início**, evitando estouros de buffer e comportamentos indefinidos.

---

## ✅ Exemplo de uso

```c
#include <stdio.h>
#include "str_read.h"

int main() {
    char nome[50];
    str_read(nome, sizeof(nome), "Digite seu nome: ");
    printf("Nome: %s\n", nome);
    return 0;
}
```

---

## 🧭 Como usar em seus próprios projetos (Tutorial para alunos)

### 1. **Baixar os arquivos**

Você pode:

- Baixar o projeto como `.zip` aqui no GitHub (`Code > Download ZIP`)
- Ou clonar com `git`:
  ```bash
  git clone git clone https://github.com/maromo71/str_read.git
  ```

---

### 2. **Copiar os arquivos necessários**

No seu projeto em C, crie uma estrutura simples como esta:

```
seu_projeto/
├── main.c
├── str_read.c
└── str_read.h
```

Copie os arquivos `str_read.c` e `str_read.h` da pasta `src/` e `include/` do repositório para o seu projeto.

---

### 3. **Incluir no seu código**

No seu `main.c`, inclua o cabeçalho:

```c
#include "str_read.h"
```

---

### 4. **Compilar com `gcc` ou `clang`**

#### Se estiver usando `gcc`:

```bash
gcc main.c str_read.c -o programa
./programa
```

#### Se estiver usando `clang` (macOS):

```bash
clang -std=c11 main.c str_read.c -o programa
./programa
```

---

## ⚙️ Compilação com CMake

Se quiser usar CMake:

```bash
mkdir build
cd build
cmake ..
make
./str_read
```

---

## ✅ Compatibilidade

- Compiladores: `GCC`, `Clang`, `MSVC`
- Padrão: `C11` (e compatível com C99)
- Plataformas: `macOS`, `Linux`, `Windows`

---

## 📚 Licença

Código aberto sob a licença MIT. Uso livre para fins didáticos e educacionais.

---

## 🤝 Contribuições

Sugestões, melhorias e pull requests são bem-vindos. Este projeto é pensado para a comunidade acadêmica.
