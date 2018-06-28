# Casamento de strings com Autômatos Finitos

Este trabalho foi implementado utilizando a Linguagem C, e têm o objetivo de fixar os conteúdos de Autômatos Finitos da disciplina de Teoria da Computação

## Como funciona?

O programa contém um menu onde irá se escolher a função desejada, após isso o usuário deverá digitar duas palavras, uma para ser analisada, e a outra para verificar se é um prefixo, um sufixo ou uma sub-palavra da primeira

## Funções

O programa contém 3 funções, cada uma implementada apenas com o auxílio de classes básicas da linguagem, são elas:

* Prefixo - Similar à função [startsWith](https://docs.oracle.com/javase/10/docs/api/java/lang/String.html#startsWith(java.lang.String)) da linguagem Java
* Sufixo - Similar à função [endsWith](https://docs.oracle.com/javase/10/docs/api/java/lang/String.html#endsWith(java.lang.String)) da linguagem Java
* Sub-palavra - Similar à função [contains](https://docs.oracle.com/javase/10/docs/api/java/lang/String.html#contains(java.lang.CharSequence)) da linguagem Java

## Arquivos

O programa é divido em três arquivos, sendo eles:

* main.c - O arquivo principal
* funcoes.c - O arquivo onde todas as implementações e funções do programa estão escritas
* prototipos.h - O arquivo onde estão todas as bibliotecas, protótipos de função e definições de constantes

É necessário os três arquivos para que o programa funcione

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

## Autor

* Gabriel Haruki Gomes Satô
