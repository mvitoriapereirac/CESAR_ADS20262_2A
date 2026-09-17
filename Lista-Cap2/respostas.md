# Lista de Exercícios – Capítulo 2: Operadores

## Questão 01

### a)
O valor exibido será:

```text
O valor armazenado eh: 2
```

### b)
`valor_inteiro` é uma variável do tipo `int`, enquanto `2.97` é um valor de ponto flutuante. Ao atribuir `2.97` a um `int`, a parte fracionária é descartada, resultando em `2`. Esse fenômeno é uma conversão implícita de tipos, com truncamento da parte decimal.

### c)
Para manter a precisão, pode-se usar `float` ou `double`. Caso seja necessário arredondar para o inteiro mais próximo, pode-se utilizar `round()` da biblioteca `<math.h>`.

---

## Questão 02 

### a)
A biblioteca `<conio.h>` não faz parte do padrão ANSI C. Funções como `getch()` e `getche()` dependem de implementações específicas e, por isso, não são portáveis para sistemas modernos como Linux e macOS.

### b)
Na biblioteca padrão `<stdio.h>`, as funções principais para caracteres são:

- `getchar()` — lê um caractere da entrada padrão;
- `putchar()` — escreve um caractere na saída padrão.

### c)
Um exemplo que ignora quebras de linha residuais é:

```c
char caractere;

do {
    caractere = getchar();
} while (caractere == '\n');
```

---

## Questão 03

O programa correspondente está no arquivo `exercicio03.c`. Ele lê um inteiro e apresenta o mesmo valor em decimal (`%d`), hexadecimal (`%x`), octal (`%o`) e como caractere (`%c`).

---

## Questão 04
Valores iniciais:

```text
a = 1, b = 2, c = 3, d = 4
```

### 1. `a += b + c`

```text
b + c = 2 + 3 = 5
a = 1 + 5 = 6
```

Agora: `a = 6, b = 2, c = 3, d = 4`.

### 2. `b *= c = d + 2`

Primeiro:

```text
d + 2 = 4 + 2 = 6
c = 6
b = 2 * 6 = 12
```

Agora: `a = 6, b = 12, c = 6, d = 4`.

### 3. `d %= a + a + a`

```text
a + a + a = 18
d = 4 % 18 = 4
```

Agora: `a = 6, b = 12, c = 6, d = 4`.

### 4. `d -= c -= b -= a`

A atribuição composta é encadeada da direita para a esquerda:

```text
b -= a  → b = 12 - 6 = 6
c -= b  → c = 6 - 6 = 0
d -= c  → d = 4 - 0 = 4
```

Agora: `a = 6, b = 6, c = 0, d = 4`.

### 5. `a += b += c += 7`

```text
c += 7  → c = 7
b += c  → b = 13
a += b  → a = 19
```

### Resultado final

```text
a = 19
b = 13
c = 7
d = 4
```

---

## Questão 05

Considerando:

```c
int i = 1, j = 2, k = 3, n = 2;
float x = 3.3, y = 4.4;
```

| Item | Resultado |
|---|---:|
| a) `i < j + 3` | **1** |
| b) `2 * i - 7 <= j - 8` | **0** |
| c) `-x + y >= 2.0 * y` | **0** |
| d) `x == y` | **0** |
| e) `!(n - j)` | **1** |
| f) `!n - j` | **1** |
| g) `i && j && k` | **1** |
| h) `i || j - 3 && k` | **1** |
| i) `i < j && 2 >= k` | **0** |
| j) `i == 2 || j == 4 || k == 5` | **0** |

---

## Questão 06
### a)

No incremento prefixado (`++n`), a variável é incrementada antes do seu valor ser utilizado:

```c
int n = 5;
int x = ++n;
```

Resultado:

```text
n = 6
x = 6
```

No pós-incremento (`m++`), o valor atual é utilizado primeiro e o incremento ocorre depois:

```c
int m = 5;
int y = m++;
```

Resultado:

```text
m = 6
y = 5
```

### b)

A expressão:

```c
printf("%d\t%d\t%d\n", n, n+1, n++);
```

não deve ser usada porque `n` é modificado por `n++` enquanto outros argumentos da mesma chamada também dependem de `n`. A ordem de avaliação dos argumentos de uma função não garante uma sequência segura para essas modificações.

Isso resulta em comportamento indefinido, portanto o resultado não deve ser considerado previsível.

---

## Questões 07 a 28

As implementações completas de cada questão estão nos arquivos `.c` correspondentes desta pasta.
