/*
 * @author: Gabriel Haruki Gomes Satô
 */

#include "prototipos.h"
#include "funcoes.c"

int main () {

    int op = 0, resultado = 0;
    char frase1[MAX];
    char frase2[MAX];

    menu ();
    scanf("%d", &op);

    switch (op) {
        case 1:
            //Lê as entradas do usuário
            receberEntradas (frase1, frase2);
            //Chama função desejada e armazena o resultado em uma variável
            resultado = comecaCom (frase1, frase2, tamanhoString (frase2));
            //Exibe o resultado
            exibirResultado (resultado, op, frase1, frase2);
            //Retorna ao main
            main ();
        break;
        case 2:
            //Lê as entradas do usuário
            receberEntradas (frase1, frase2);
            //Chama função desejada e armazena o resultado em uma variável
            resultado = terminaCom (frase1, frase2, tamanhoString (frase1), tamanhoString (frase2));
            //Exibe o resultado
            exibirResultado (resultado, op, frase1, frase2);
            //Retorna ao main
            main ();
        break;
        case 3:
            //Lê as entradas do usuário
            receberEntradas (frase1, frase2);
            //Chama função desejada e armazena o resultado em uma variável
            resultado = subPalavra (frase1, frase2, tamanhoString (frase1), tamanhoString (frase2));
            //Exibe o resultado
            exibirResultado (resultado, op, frase1, frase2);
            //Retorna ao main
            main ();
        break;
        default:
            //Retorna erro caso o usuário digite uma opção inválida
            printf("\nERRO: POR FAVOR, DIGITE UMA OPCAO VALIDA!\n");
            setbuf (stdin, NULL); //Apaga o buffer da memória para evitar erros de leitura indesejada
            getchar (); //Provoca uma pausa no programa até o usuário apertar alguma tecla
            main ();
    }

    return 0;
}
