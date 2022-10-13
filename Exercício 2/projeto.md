# Projeto:
## Objetivo:
 Criar a estrutura de uma Pokedéx.

## Especificações:
 A Pokedéx deve registra Pokémons com suas características, como não se sabe quantos serão registrados é necessário fazer alocação dinâmica dos dados ou colocar um limite de Pokémons registráveis.
 > Para facilitar o desenvolvimento irei utizar um vetor de 151 Pokemóns (primeira geração).

 ### Estruturas:
 ##### Estrutura Principal:
 - Nome (max. 50 `char`)
 - Tipo Primário (max. 20 `char`)
 - Tipo Secundário (max. 20 `char`)
 - Lista de Atributos 
 - Lista de 4 Ataque Possíveis
  
 ##### Estrutura de Atributos (`int`):
 - HP
 - Ataque
 - Defesa
 - Ataque Especial
 - Defesa Especial
 - Velocidade
 
 ##### Ataques:
 - Nome (max. 20 `char`)
 - Poder Base (`int`)
 - Acurácia (`float`)
 - Classe (`char`)
   - `p` para físico
   - `s` para especial

 ### Comandos:
 - (**`1`**) Cadastrar um novo Pokémon (sem seus ataques). Será lido na **ordem**:
    - Nome do Pokémon
    - Tipo primário
    - Tipo secundário
    - HP
    - Ataque
    - Defesa
    - Ataque especial
    - Defesa especial
    - Velocidade
 - (**`2`**) Adicionar um ataque à lista de um Pokémon específico. Será lido na **ordem**:
    - Índice do Pokémon no vetor
    - Índice do ataque no vetor de ataques do Pokémon (de 0 a 3)
    - Nome do ataque
    - Poder base do ataque
    - Acurácia do ataque
    - Classe do ataque
 - (**`3`**) Imprimir os dados de um Pokémon.
    - Será lido na **ordem**:
      - Índice do Pokémon no vetor de Pokémon atual.
    - Será imprimido na **ordem e formatação**:
      - "Nome do Pokemon: %s\n"
      - "Tipo primario: %s\n"
      - "Tipo secundario: %s\n"
      - "Status:\n"
      - "\tHP: %d\n"
      - "\tAtaque: %d\n"
      - "\tDefesa: %d\n"
      - "\tAtaque Especial: %d\n"
      - "\tDefesa Especial: %d\n"
      - "\tVelocidade: %d\n\n"
 - (**`4`**) Imprimir os dados de ataque de um Pokémon.
    - Será lido na **ordem**:
        - Índice do Pokémon no vetor atual de Pokémon
        - Índice do ataque no vetor de ataques do Pokémon (0 a 3)
    - Será imprimido na **ordem e formatação**:
        - "Nome do Ataque: %s\n"
        - "Poder base: %d\n"
        - "Acuracia: %f\n"
        - "Classe: %c\n\n"
 - (**`0`**) Encerrar o programa.

## Entrega:
 - Deve ser um arquivo `.zip` com `Makefile` na raíz do arquivo. 
 - Deve conter apenas o comando de compilação na diretiva `all`.
 - Deve contar apenas o comando de execução na diretiva `run`.