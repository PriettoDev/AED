# AED — Algoritmos e Estruturas de Dados

Repositório de estudos da disciplina **Algoritmos e Estruturas de Dados (AED)**, do curso de
Engenharia da Computação da Universidade SENAI CIMATEC (2026.2).

Aqui ficam os códigos feitos em sala e em casa: exercícios, bibliotecas (`.h`) da disciplina e
simulados de prova. As pastas seguem a ordem dos conteúdos do plano da disciplina.

## Estrutura

```text
aed/
├── .gitignore                         # ignora executáveis e arquivos temporários
├── LICENSE                            # licença MIT
├── README.md                          # este guia
│
├── 01_c_review/                       # Revisão de C
│   ├── basics/                        # vetores, strings, funções
│   ├── pointers/                      # ponteiros, passagem por referência
│   └── structs/                       # struct, typedef, TAD
│
├── 02_static_linear_structures/       # Unidade 1 — alocação estática (vetor)
│   ├── stack/                         # pilha.h + exercícios de pilha
│   └── queue/                         # fila.h
│
├── 03_algorithm_design/               # Paradigmas de projeto de algoritmos
│   └── backtracking/                  # tentativa e erro
│
├── 04_dynamic_linear_structures/      # Unidade 2 — alocação dinâmica (ponteiros)
│   ├── dynamic_allocation/            # malloc, free
│   ├── singly_linked_list/            # listase.h + teste
│   ├── doubly_linked_list/            # listade.h
│   ├── linked_stack/                  # pilhale.h
│   └── linked_queue/                  # filale.h
│
├── mock_exams/                        # simulados de prova
│   └── mock_exam_a/
│
└── docs/
    └── class_notes/                   # anotações das aulas
```

## Convenções

- **Pastas e arquivos novos em inglês**, em `snake_case`, com prefixo numérico para manter a ordem
  (`01_`, `02_`, … nas pastas; `ex01_`, `ex02_`, … nos exercícios).
- **As bibliotecas da disciplina mantêm o nome original** (`pilha.h`, `fila.h`, `listase.h`,
  `listade.h`, `pilhale.h`, `filale.h`), porque é assim que são usadas em sala e na prova.
  Cada uma fica na pasta da estrutura que implementa, junto com os exercícios que a usam.
- As bibliotecas contêm **somente as operações dadas em aula**. Funções pedidas nos
  exercícios ("construa uma função que…") ficam no arquivo do exercício, não na biblioteca.
- Executáveis (`.exe`, `.o`, `.out`) **não são versionados**: veja o `.gitignore`.

## Como compilar

Entre na pasta do exercício e compile com os avisos ligados:

```bash
cd 02_static_linear_structures/stack
gcc ex01_remove_odd_numbers.c -o output/ex01 -Wall -Wextra
./output/ex01
```

- `-Wall -Wextra` ligam os avisos (warnings) do compilador — leia todos eles.
- Os `.h` daqui têm a implementação dentro do próprio header, então basta compilar o `.c`
  do exercício; o `#include "pilha.h"` procura o arquivo na mesma pasta.
- A pasta `output/` é ignorada pelo Git (crie-a com `mkdir output` se não existir).
- Os exercícios que usam `pow()` ou `sqrt()` precisam de `#include <math.h>` e, no Linux,
  da flag `-lm` no final do comando.

## Progresso (plano da disciplina)

Marcado = já existe código sobre o assunto neste repositório.

**Unidade 1 — Estruturas lineares com alocação estática**
- [x] Revisão de C (vetores, strings, funções, ponteiros)
- [x] Tipos de dados, estruturas de dados e TAD (struct)
- [x] Pilha implementada com vetor
- [x] Fila implementada com vetor
- [ ] Complexidade algorítmica
- [x] Recursividade e tentativa e erro (backtracking)

**Unidade 2 — Estruturas lineares com alocação dinâmica**
- [x] Alocação dinâmica de memória
- [x] Lista simplesmente encadeada
- [x] Lista duplamente encadeada
- [x] Pilha e fila encadeadas
- [ ] Ordenação interna e externa (bolha, inserção, QuickSort, MergeSort, intercalação)

**Unidade 3 — Pesquisa em memória primária e secundária**
- [ ] Pesquisa sequencial e binária
- [ ] Árvores binárias de pesquisa (sem e com balanceamento — AVL)
- [ ] Árvores digitais
- [ ] Tabela hash (funções de transformação, colisões)
- [ ] Árvores B, B+ e B*

Pastas novas (`05_sorting/`, `06_searching/`, `07_trees/`, `08_hashing/`,
`09_secondary_memory/`) serão criadas quando o conteúdo chegar.

## Referências

- Plano da disciplina AED — SENAI CIMATEC
- DAMAS, Luís. *Linguagem C*. 25ª ed.
- TENENBAUM, A. M.; LANGSAM, Y.; AUGENSTEIN, M. J. *Estruturas de Dados usando C*.
- ZIVIANI, Nivio. *Projeto de Algoritmos com implementações em Pascal e C*.
