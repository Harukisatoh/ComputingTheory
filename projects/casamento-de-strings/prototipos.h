/*
 * @author: Gabriel Haruki Gomes Satô
 */

#ifndef PROTOTIPOS_H
#define PROTOTIPOS_H

#include <stdio.h>
#include <stdlib.h>
#define MAX 50

//PROTÓTIPOS
void menu ();
void limpar ();
void receberEntradas (char *f1, char *f2);
int tamanhoString (char *f);
int comecaCom (char *f1, char *f2, int t2);
int terminaCom (char *f1, char *f2, int t1, int t2);
int subPalavra (char *f1, char *f2, int t1, int t2);
void exibirResultado (int res, int opc);

#endif // PROTOTIPOS_H
