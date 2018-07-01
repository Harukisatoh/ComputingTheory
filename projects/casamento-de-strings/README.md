# Casamento de strings com Autômatos Finitos

Este trabalho foi implementado utilizando a Linguagem C, e têm o objetivo de fixar os conteúdos de Autômatos Finitos da disciplina de Teoria da Computação

## Estrutura do programa

Este tópico demonstra como o programa foi dividido, de forma a organizá-lo

### Arquivos

O programa é divido em três arquivos, sendo eles:

* main.c - O arquivo principal
* funcoes.c - O arquivo onde todas as implementações e funções do programa estão escritas
* prototipos.h - O arquivo onde estão todas as bibliotecas, protótipos de função e definições de constantes

É necessário os três arquivos para que o programa funcione

### Funções

O programa contém 3 funções principais, cada uma implementada apenas com o auxílio de classes básicas da linguagem, são elas:

* [Prefixo](https://github.com/Harukisatoh/ComputingTheory/tree/master/projects/casamento-de-strings#user-content-função-de-prefixo)
* [Sufixo](https://github.com/Harukisatoh/ComputingTheory/tree/master/projects/casamento-de-strings#user-content-função-de-sufixo)
* [Sub-palavra](https://github.com/Harukisatoh/ComputingTheory/tree/master/projects/casamento-de-strings#user-content-função-de-sub-palavra)

--------------------------------------------------------------------------------

## Como funciona?

O programa contém um menu onde irá se escolher a função desejada, após isso o usuário deverá digitar duas palavras, uma para ser analisada, e a outra para verificar se é um prefixo, um sufixo ou uma sub-palavra da primeira, neste tópico explicaremos como funciona a lógica de cada uma delas

### Função de prefixo

É uma função similar à função [startsWith](https://docs.oracle.com/javase/10/docs/api/java/lang/String.html#startsWith(java.lang.String)) da linguagem Java. Seu objetivo é verificar se uma string inicia-se com uma segunda string.

* O usuário passa as duas strings
* O programa calcula o tamanho da segunda string e armazena em uma variável
* A função entra em um loop percorrendo cada caractere das duas strings, até que ele verifique que a primeira string não inicia-se com a segunda
    * A cada execução desse loop é verificado(através de um if) se a letra da primeira string é igual a letra da segunda string, caso não seja, o loop é interrompido e a função retorna 0
* Se for verificado que todas as letras da segunda string são iguais as primeiras letras da primeira string, então a função retorna 1

### Função de sufixo

É uma função similar à função [endsWith](https://docs.oracle.com/javase/10/docs/api/java/lang/String.html#endsWith(java.lang.String)) da linguagem Java. Seu objetivo é verificar se uma string termina com uma segunda string.

* O usuário passa as duas strings
* O programa calcula o tamanho das duas strings e armazena em variáveis
* A função entra em um loop percorrendo cada caractere das duas strings de forma inversa à da função de prefixo, ou seja, percorre as strings de trás pra frente, até que ele verifique que a primeira string não termina com a segunda
    * A cada execução desse loop é verificado(através de um if) se a letra da primeira string é igual a letra da segunda string, caso não seja, o loop é interrompido e a função retorna 0
* Se for verificado que todas as letras da segunda string são iguais as últimas letras da primeira string, então a função retorna 1

### Função de sub-palavra

É uma função similar à função [contains](https://docs.oracle.com/javase/10/docs/api/java/lang/String.html#contains(java.lang.CharSequence)) da linguagem Java. Seu objetivo é verificar se uma string contém uma segunda string.

* O usuário passa as duas strings
* O programa calcula o tamanho das duas strings e armazena em variáveis
* A função entra em um loop que percorre todas as letras da primeira string, até que ele verifique que a primeira string não contem a segunda
    * A cada execução desse loop é verificado(através de um if) se a letra da primeira string é igual a letra da segunda string, caso seja, a função entrará em outro loop
        * Este loop percorrerá as duas strings (com a primeira string começando a percorrer do caractere em que ela está), até que chegue ao fim da segunda string
            * A cada execução desse loop novamente é verificado(através de um if) se a letra da primeira string é igual a letra da segunda string, caso não seja, o segundo loop é interrompido, e o primeiro loop continua sua execução
* Se, ao final do segundo loop, for verificado que a primeira string contém a segunda string, então a função retorna 1, porém se mesmo após o primeiro loop terminar e não for encontrado a segunda string dentro da primeira, então a função retorna 0

--------------------------------------------------------------------------------

## Como executá-lo?

Estas instruções lhe auxiliarão à baixar e executar o programa em sua máquina

### Pré-requisitos

Antes de qualquer coisa, para que seja possível executar o programa é necessário que sua máquina tenha o compilador necessário para a linguagem C (GCC). Este passo geralmente não é necessário no Linux, pois a maioria das distribuições já contém o GCC por padrão, porém se você utiliza Windows deverá baixá-lo e instalá-lo

### Como baixar e instalar o GCC?

Para Windows existe o MinGW, um conjunto de ferramentas GNU que contém o compilador de C/C++, é possível baixá-lo através do [SourceForge](https://sourceforge.net/projects/mingw/files/), e após isso basta apenas executar o arquivo baixado para que ele seja instalado

### Diretório de binários do MinGW

Após instalado é necessário mais um passo para que o compilador esteja pronto para uso, precisamos atualizar a PATH do Windows com o diretório de binários do MinGW. Para isso clique no menu Iniciar, e depois clique com o botão direito em Computador, e em seguida em Propriedades. Vá em configurações avançadas do sistema, e após isso vá em variáveis de ambiente. Ache a variável PATH, e clique em editar, e então adicione o diretório dos binários que foram instalados com o MinGW (geralmente em C:/MinGW/bin). Após esses passos o compilador está pronto para uso

### Criando executável do programa

Para isso é necessário que você baixe o código fonte do programa, após isso vá no CMD, ou no terminal se você estiver no Linux, navegue pelas pastas até que você esteja no diretório onde foi baixado os arquivos, e então digite esse comando:

```
gcc main.c -o meuPrograma
```

No lugar de "meuPrograma" você poderá dar o nome que quiser para o executável, após isso o executável foi criado

--------------------------------------------------------------------------------

## Autor

* Gabriel Haruki Gomes Satô
