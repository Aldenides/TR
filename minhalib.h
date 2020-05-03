#ifndef MINHALIB_H
#define MINHALIB_H
#include <iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>


void linha();
void linha2(char A);
void DESENHA_RETANGULO_SOLIDO(int L,int C,char S);
void DESENHA_RETANGULO_SOLIDO2(int L,int C,char S);
void DESENHA_RETANGULO_PREENCHIDO(int L,int C,char S,char P);
void funcao_raio(double R);
void funcao_volume(double R);
void funcao_media(float N1,float N2,double N3);
void funcao_semestre(int N);
int funcao_logaritmo(int LT, int B);
int funcao_fatorial(int N);
bool funcao_primo(int N);
int funcao_fibonacci(int N);
bool funcao_regular(int N);
int funcao_combinacao(int N, int P);
bool funcao_consoante(char X);
bool funcao_vogais(char X);
bool funcao_palindrome(char *T);
int tamanho_vetor_numero_perfeito(int N);
int* divisores_numero_perfeito(int N);
int soma_divisores_numero_perfeito(int N);
bool numero_perfeito(int N);
void funcao_lower_case(char* E,int N);
void funcao_upper_case(char* E,int N);
void caixa_com_texto_centralizado(int N, char X, char* E, int N2 );
void ordenacao_crescente(int &N1, int &N2, int &N3);
void funcao_troca(int &N1, int &N2);
int funcao_maior_frase(char* PC,char* PC2,int N1,int N2);
int contagem_vetor(char* PC);
char* funcao_concatenar(char* PC,char* PC2, int N1,int N2);
int* convert_char_int(char* EV1,int N);
void funcao_troca_troca(char* EV1,int N);
char* funcao_retira_espaco_branco(char* EV1,int &N);
char** funcao_separa_palavras(char* EV1,char C,int N,int &N1);
void funcao_deleta_matriz(char** MCD,int N1);
int funcao_corta_string(char* EV1,char* EV2);
char* funcao_numeros_gigantes(char* EV1, char* EV2,int &N,int &F);
void funcao_maior_menor(int *EVI1,int N, int &N1, int &N2);
int** criar_matriz_dinamica(int N,int N1);
int** soma_de_matrizes(int N,int N1,int** M1,int**M2);
void funcao_deleta_matriz_int(int** MID,int N);
#endif // MINHALIB_H
