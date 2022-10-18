# Catálogo de Jogos - Incompleto

## Objetivo
 Criar um catálogo capaz de:
 1. Armazenar informações de um jogo:
      - Nome
      - Empresa Produtora
      - Ano de Lançamento
 2. Buscar por jogos lançados em um determinado ano.
 3. Buscar por jogos criados por uma determinada produtora.

## Entrada
 1. Recebe os seguintes dados do jogo (um por linha), até encontra um `F`:
    - **Nome**
    - **Produtora**
    - **Ano** 
 2. Depois de achar um `F`, ele espera o próximo caractere.
 3. `A` corresponde a uma busca por **Ano**.
 4. `E` corresponde a uma busca por **Empresa Produtora**.
 Obs: Caso não ache nenhum jogo, ele deve retornar `Nada encontrado`.
 ### Exemplo `input`:
 ```
    Horizon Zero Dawn
    Guerrilla Games
    2017
    Killzone
    Guerrilla Games
    2004
    Crash Bandicoot
    Naughty Dog
    1999
    F
    A
    2004
    A
    2000
    E
    Guerrilla Games
    F
 ```
 ### Exemplo `output`:
 ```
    Killzone
    Nada encontrado
    Horizon Zero Dawn
    Killzone
 ```

## Detalhes de Implementação
 - Representar os objetos `jogo` e `catálogo` de forma abstrata, logo com uma `struct` para cada.
 - A memória deve ser **alocada dinamicamente** e **liberada ao fim da execução**.
 - Utilizar arquivos `.c` e `.h` para separar a implementação e a responsabilidade dos métodos de cada objeto (`jogo.c`, `catalogo.c`).
 - Construir funções para realizar operações repetitivas.
 - Escrever um `Makefile` que será responsável por gerenciar a execução do projeto.