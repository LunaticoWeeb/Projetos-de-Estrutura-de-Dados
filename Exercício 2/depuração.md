# Depuração:
## Bug 1: 
 Não está registrando ou acessando os pokemons corretamente.
### Tentativa 1:
 **Ideia:** pode ser um problema no acesso.
 **Solução:** passagem de referência do vetor.
 **Resultado:** o segundo Pokémon registrado se torna o 0.
 **Conclusão:** possível que o erro seja de registro **e** acesso.
### Tentativa 1.1:
 **Ideia:** se o erro de acesso está corrigido, então devemos corrigir o acesso agora.
 #### Teste 1:
 **Hipótese:** há um problema no registro do tamanho do vetor, logo ele registra em cima do Pokémon anterior.
 **Teste:** imprimir o tamanho do vetor após cada registro.
 **Resultado:** realmente o tamanho não sai de 1.
 #### Resolvendo:
 **Solução 1:** mudar de `++` para `+= 1`.
 **Resultado:** funcionou!

---

## Bug 2:
 ~~Não está funcionando o registro/acesso de ataques~~
 Quando ele entra no modo 2, ele não sai.
 ### Tentativa 1:
 **Ideia:** pode ser a simplificação de `pkdex[pkdex_index].attack[atk_index]` > `atk` que esteja causando isso.
 **Solução:** `atk` > `pkdex[pkdex_index].attack[atk_index]`
 **Resultado:** mesmo efeito.
 *Vou desfazer essa alteração.*
 ### Tentativa 2:
 **Ideia:** algum problema na entrada dos dados de ataque estão bloqueando o fluxo do programa.
 **Solução:** diagnosticar o que está causando isso.
 #### Teste 1:
 **Hipótese:** omissão do index pode causar isso.
 **Teste:** desomitir o index.
 **Resultado:** não funcionou.
 ### Tentativa 3: