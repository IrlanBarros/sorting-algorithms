# Sorting Algorithms - Ordenação Básica 📊

Este repositório contém as soluções para a **1ª Lista de Atividades - Ordenação Básica** da disciplina de Laboratório de Algoritmos e Estrutura de Dados da Universidade Federal do Cariri (UFCA). 

O foco destas atividades é a implementação, instrumentação e otimização dos três principais algoritmos de ordenação com complexidade $O(n^2)$: **Bubble Sort, Selection Sort e Insertion Sort**.

## 📁 Estrutura do Repositório

O repositório está organizado da seguinte forma:

* `src/`: Contém os arquivos `.c` com as resoluções das 13 questões propostas na lista.
* `src/questoes-slides/`: Contém os desafios propostos durante os slides das aulas teóricas.

```text
sorting-algorithms/
├── src/
│   ├── questao-1.c
│   ├── questao-2.c
│   ├── questao-3.c
│   ├── ...
│   └── questoes-slides/
│       ├── bubble-sort.c
│       ├── selection-sort.c
│       └── insertion-sort.c
```

## 📋 Lista de Questões e Arquivos

Abaixo está o mapeamento de cada questão da lista para o seu respectivo arquivo fonte no diretório `src/`:

| Questão | Descrição | Arquivo |
| :--- | :--- | :--- |
| **1** | [cite_start]Bubble Sort (básico) [cite: 13] | `questao-1.c` |
| **2** | [cite_start]Bubble Sort instrumentado (comparações e trocas) [cite: 16] | `questao-2.c` |
| **3** | [cite_start]Bubble Sort com early stop (flag) [cite: 20] | `questao-3.c` |
| **4** | [cite_start]Comparação experimental: sem otimização vs early stop [cite: 23] | `questao-4.c` |
| **5** | [cite_start]Bubble Sort com parâmetro de ordem [cite: 29] | `questao-5.c` |
| **6** | [cite_start]Selection Sort (implementação base) [cite: 34] | `questao-6.c` |
| **7** | [cite_start]Traçado (passo a passo) Selection Sort [cite: 36] | `questao-7.c` |
| **8** | [cite_start]Métricas no Selection Sort [cite: 38] | `questao-8.c` |
| **10** | [cite_start]Selection Sort crescente/decrescente [cite: 49] | `questao-10.c` |
| **11** | [cite_start]Insertion Sort (implementação base) [cite: 52] | `questao-11.c` |
| **12** | [cite_start]Traçado (passo a passo) Insertion Sort [cite: 57] | `questao-12.c` |
| **13** | [cite_start]Insertion Sort instrumentado (comparações e movimentações) [cite: 59] | `questao-13.c` |

> **Nota:** As questões 4, 9 e 13 exigem a gravação de vídeos explicativos. Os arquivos `.c` correspondentes a essas questões neste repositório contêm os códigos utilizados para gerar os dados empíricos apresentados nos vídeos. A questão 9 não necessitou de um arquivo .c

## 🚀 Como compilar e executar

Certifique-se de ter um compilador C instalado (como o gcc). Para rodar qualquer uma das questões, navegue até o diretório raiz do projeto e execute no terminal:

**1. Compilação:**
```bash
gcc src/questao-1.c -o q1
```

**2. Execução:**

* **No Linux/macOS:**
```bash
./q1
```

* **No Windows:**
```bash
q1.exe
```

## 🛠️ Tecnologias Utilizadas

* **Linguagem:** C
* **Conceitos:** Algoritmos de Ordenação, Análise de Complexidade de Algoritmos, Estruturas de Dados, Ponteiros e Passagem por Referência.

## 🎓 Sobre a Disciplina

[cite_start]Este repositório foi desenvolvido para armazenar as resoluções da 1ª Lista de Atividades [cite: 6] [cite_start]da disciplina de **Laboratório de Algoritmos e Estrutura de Dados** [cite: 5] [cite_start]da **Universidade Federal do Cariri (UFCA)**[cite: 2, 3].