/*
 * @author: Gabriel Haruki Gomes Satô
 */

//Exibe o menu
void menu () {
    limpar ();
    printf("==========================================\n");
    printf("\tCASAMENTO DE STRINGS\n");
    printf("==========================================\n");
    printf(" (1) Prefixo\n");
    printf(" (2) Sufixo\n");
    printf(" (3) Sub-Palavra\n\n");
    printf("DIGITE A OPCAO DESEJADA: ");
}

//Limpa a tela
void limpar () {
    //Detecção de Sistema Linux para executar o comando system("clear")
    #ifdef __linux__
    system("clear");
    //Detecção de Sistema Windows para executar o comando system("cls")
    #elif defined WIN32
    system("cls");
    #endif
}

//Lê as entradas dos usuários
void receberEntradas (char *f1, char *f2) {
    printf("Digite a frase: ");
    setbuf (stdin, NULL); //Apaga o buffer da memória para evitar erros de leitura indesejada
    fgets (f1, MAX, stdin);
    printf("Digite a palavra que deseja encontrar: ");
    setbuf (stdin, NULL); //Apaga o buffer da memória para evitar erros de leitura indesejada
    fgets (f2, MAX, stdin);
}

//Retorna a quantidade de caracteres da string
int tamanhoString (char *f) {
    int i = 0;

    //Percorre todo o array até que encontre o '\0'
    while (f[i] != '\0') {
        i++;
    }
    return (i-1);
}

//Verifica se uma string inicia com as mesmas letras de uma segunda string
int comecaCom (char *f1, char *f2, int t2) {
    int continua = 1, i = 0;

    //Continua no loop até que ele verifique que a primeira string não começa com a segunda
    while (continua && i < t2) {
        if (f1[i] != f2[i]) { //Se encontrar caracteres diferentes interrompe a execução do loop
            continua = 0;
        }
        i++;
    }

    //Retorna ao usuário o resultado da busca
    return continua;
}

//Verifica se uma string termina com as mesmas letras de uma segunda string
int terminaCom (char *f1, char *f2, int t1, int t2) {
    int continua = 1, i = (t1-1), j = (t2-1);
    int lim = (t1-t2-1);

    //Continua no loop até que ele verifique que a primeira string não termina com a segunda
    while (continua && i > lim) {
        if (f1[i] != f2[j]) { //Se encontrar caracteres diferentes interrompe a execução do loop
            continua = 0;
        }
        i--;
        j--;
    }

    //Retorna ao usuário o resultado da busca
    return continua;
}

//Verifica se uma string contém uma segunda string
int subPalavra (char *f1, char *f2, int t1, int t2) {
    int i = 0, j = 0, k = 0;
    int continua = 0;

    //Percorre a frase 1
    while ((i < t1) && (t1-i >= t2)) {
        /*
         * Se ele encontrar um elemento na posição i igual ao primeiro elemento da segunda string
         * então ele começa a verificar se a frase 1 contém a frase2
         */
        if (f1[i] == f2[j]) {
            //Continua no loop até que ele encontre um caractere diferente
            for (continua = 1, j = 0, k = i; continua && j < t2; j++, k++) {
                if (f1[k] != f2[j]) {
                    continua = 0;
                }
            }

            //Caso encontre, retorna ao usuário
            if (continua == 1) {
                return continua;
            }
        }
        i++;
    }

    //Caso não encontre, retorna ao usuário
    return continua;
}

//Exibe um resultado personalizado para cada opção escolhida no menu
void exibirResultado (int res, int opc) {
    char opc2;

    //Verifica qual opção o usuário havia escolhido no início
    switch (opc) {
        case 1:
            //Verifica qual foi o resultado da função e retorna ao usuário
            if (res == 1) {
                printf("\nA frase 1 COMECA com a frase 2!\n");
            } else {
                printf("\nA frase 1 NAO COMECA com a frase 2!\n");
            }

            //Verifica se o usuário deseja voltar ao menu
            printf("Deseja voltar ao menu? [s/n] ");
            setbuf (stdin, NULL); //Apaga o buffer da memória para evitar erros de leitura indesejada
            scanf("%c", &opc2);

            //Se não, fecha o programa
            if ((opc2 != 's') && (opc2 != 'S')) {
                exit (0);
            }

        break;
        case 2:
            //Verifica qual foi o resultado da função e retorna ao usuário
            if (res == 1) {
                printf("\nA frase 1 TERMINA com a frase 2!\n");
            } else {
                printf("\nA frase 1 NAO TERMINA com a frase 2!\n");
            }

            //Verifica se o usuário deseja voltar ao menu
            printf("Deseja voltar ao menu? [s/n] ");
            setbuf (stdin, NULL); //Apaga o buffer da memória para evitar erros de leitura indesejada
            scanf("%c", &opc2);

            //Se não, fecha o programa
            if ((opc2 != 's') && (opc2 != 'S')) {
                exit (0);
            }

        break;
        case 3:
            //Verifica qual foi o resultado da função e retorna ao usuário
            if (res == 1) {
                printf("\nA frase 1 CONTEM a frase 2!\n");
            } else {
                printf("\nA frase 1 NAO CONTEM a frase 2!\n");
            }

            //Verifica se o usuário deseja voltar ao menu
            printf("Deseja voltar ao menu? [s/n] ");
            setbuf (stdin, NULL); //Apaga o buffer da memória para evitar erros de leitura indesejada
            scanf("%c", &opc2);

            //Se não, fecha o programa
            if ((opc2 != 's') && (opc2 != 'S')) {
                exit (0);
            }

        break;
    }
}
