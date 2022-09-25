# Exercícios 1: Troco em Moedas
## Objetivo:
O programa deve ter uma **função** que recebe um valor em centavos e deve retornar este valor **na menor quantidade possível de moedas**.

As moedas válidas são:
- 1 real
- 50 centavos
- 25 centavos
- 10 centavos
- 5 centavos
- 1 centavo

No corpo do programa deve estar a chamada da função e a impressão da saída:

```C
O valor consiste em %d moedas de 1 real\n
O valor consiste em %d moedas de 50 centavos\n
O valor consiste em %d moedas de 25 centavos\n
O valor consiste em %d moedas de 10 centavos\n
O valor consiste em %d moedas de 5 centavos\n
O valor consiste em %d moedas de 1 centavo\n
```

A função **deve receber o parâmetro por referência**.

## Planejamento:
- [x] Fazer o programa que receba o valor diretamente e devolva as moedas **(v1)**.
- [x] Separar a parte do cálculo de moedas em uma função, rebendo o parâmetro por referência **(v2)**.
- [x] Imprimir corretamente os valores **(v2.1)**.
- [x] Receber os parâmetros corretamente **(v2.1)**.

## Ideia:
Para conseguir devolver o menor número de moedas possível podemos apenas fazer a divisão inteira (sempre arredondado para baixo) o valor de entrada pela maior moeda e repetir para cada vez moedas menores.

### **Pseudocódigo:**

**`int:`** valor

**`dict:`** moedas = (c100:100, c50:50, c25:25, c10:10, c5:5, c1:1) *//usar enum (?)*

**`dict:`** troco = (c100, c50, c25, c10, c5, c1) *//vetores?*

**`for`** moeda, trocado **`in`** moedas, troco **`{`**

> resto = valor % moeda
> 
> trocado = (valor - resto) / moeda
>
> valor -= moeda * trocado

**`}`**

**`return:`** troco