#include <iostream>
#include "minhalib.h"
using namespace std;

int main()
{
    double R;
    int O,N,N1=0,N2,F,VI1[200];
    int** M1,** M2,** MN3;
    float FN1,FN2,FN3;
    int* VD1;
    int* EVI1=VI1;
    char V1[200],C,C2,V2[200];
    char* EV1=V1;
    char* EV2=V2;
    char* PCD;
    char* VCD;
    char* V3;
    char** MCD;


    cout<<"********************************* Escolha o Exercicio que Deseja Executar. ******************************************\n\n";
    cout<<"  __________________________________________________________________________________________________________________\n";
    cout<<" |                                                                                                                  |";
    cout<<"    | 1.Desenha Linha.                               17.Vogal minuscula.                     33.Numeros Gigantes.      |\n";
    cout<<" | 2.Desenhar linha com caracter desejado.        18.Palindromo.                          34.Numero Maior e Menor.  |\n";
    cout<<" | 3.Desenhar Retangulo solido.                   19.Numero perfeito.                     35.Soma de Matriz.        |\n";
    cout<<" | 4.Desenhar retangulo com espaco no meio.       20.lower case.                                                    |\n";
    cout<<" | 5.Desenhar retangulo com desenho no meio.      21.Upper case.                                                    |\n";
    cout<<" | 6-Raio do circulo.                             22.Texto centralizado.                                            |\n";
    cout<<" | 7-Volume da esfera.                            23.Ordenacao_crescente.                                           |\n";
    cout<<" | 8-Calcular media.                              24.Troca de Valores.                                              |\n";
    cout<<" | 9-Primeiro semestre.                           25.Contagem do vetor.                                             |\n";
    cout<<" | 10-Logaritmo.                                  26.Frase maior.                                                   |\n";
    cout<<" | 11-Fatorial.                                   27.Contatenar duas frases.                                        |\n";
    cout<<" | 12-Numeros Primos.                             28.Converter char para int.                                       |\n";
    cout<<" | 13-Fibonacci.                                  29.Conversao de caracter                                          |\n";
    cout<<" | 14-Numero Regular.                             30.Retirando espacos em branco.                                   |\n";
    cout<<" | 15-Combinacoes.                                31.Separando as palavras.                                         |\n";
    cout<<" | 16.Consoante ou vogal.                         32.Cortando a string.                                             |\n";
    cout<<" |__________________________________________________________________________________________________________________|\n";
    cout<<"  Digite o numero correspodente ao exercicio desejado:\n  ";
    cin>>O;

    switch(O){
    case 1:
        system("cls");
        linha();
            cout <<"CMP 1048"<< endl;
        linha();
            cout <<"Tecnicas de Programacao"<< endl;
        linha();
        return 0;
        break;

    case 2:
        system("cls");
        C='*';
        linha2(C);
            cout <<"CMP 1048"<< endl;
        C='@';
        linha2(C);
            cout <<"Tecnicas de Programacao"<< endl;
        C='+';
        linha2(C);


        break;

    case 3:
        system("cls");
        cout<<"Digite a quantidade de linhas.\n";
            cin>>N1;
        cout<<"Digite a quantidade de colunas.\n";
            cin>>N2;
        cout<<"Digite o simbolo.\n";
            cin>>C;

        DESENHA_RETANGULO_SOLIDO(N1,N2,C);

        break;

    case 4:
        system("cls");
        cout<<"Digite a quantidade de linhas.\n";
            cin>>N1;
        cout<<"Digite a quantidade de colunas.\n";
            cin>>N2;
        cout<<"Digite o simbolo.\n";
            cin>>C;

        DESENHA_RETANGULO_SOLIDO2(N1,N2,C);
        break;

    case 5:
        system("cls");
        cout<<"Digite a quantidade de linhas.\n";
            cin>>N1;
        cout<<"Digite a quantidade de colunas.\n";
            cin>>N2;
        cout<<"Digite o simbolo da borda.\n";
            cin>>C;
        cout<<"Digite o simbolo do preenchimento.\n";
            cin>>C2;

        DESENHA_RETANGULO_PREENCHIDO(N1,N2,C,C2);
        break;

    case 6:
        system("cls");
        cout<<"Escreva o raio do circulo.\n";
        cin>>R;
        funcao_raio(R);
    break;
    case 7:
        system("cls");
        cout<<"Digite o raio da esfera.\n";
        cin>>R;
        funcao_volume(R);
    break;
    case 8:
        system("cls");
        cout<<"Digite a primeira nota.\n";
        cin>>FN1;
        cout<<"Digite a segunda nota.\n";
        cin>>FN2;
        cout<<"Digite a terceira nota.\n";
        cin>>FN3;
        funcao_media(FN1,FN2,FN3);
    break;
    case 9:
        system("cls");
        cout<<"Digite o numero do mes correspondente.\n";
        cin>>N;
        funcao_semestre(N);
    case 10:
        system("cls");
        cout<<"Digite o logaritmando.\n";
        cin>>N;
        cout<<"Digite a base.\n";
        cin>>N1;
        cout<<"O logaritmo e: "<<funcao_logaritmo(N,N1)<<endl;
    break;
    case 11:
        system("cls");
        cout<<"Digite o Numero.\n";
        cin>>N;
        cout<<"O resultado e: "<<funcao_fatorial(N)<<endl;
    break;
    case 12:
        system("cls");
        cout<<"Digite o Numero.\n";
        cin>>N;
        if(funcao_primo(N)==1)
        {
            cout<<"O numero nao e primo.\n";
        }
        else
        {
           cout<<"O numero e primo.\n";
        }
    break;
    case 13:
        system("cls");
        cout<<"Digite o termo desejado do Fibonacci.\n";
        cin>>N;
        cout<<"O numero e: "<<funcao_fibonacci(N)<<endl;
    break;
    case 14:
        system("cls");
        cout<<"Digite o Numero.\n";
        cin>>N;
        if(funcao_regular(N)==1)
        {
            cout<<"Esse numero e regular.\n";
        }
        else
        {
            cout<<"Esse numero nao e regular.\n";
        }
    break;
    case 15:
        system("cls");
        cout<<"Digite o numero de elementos.\n";
        cin>>N;
        cout<<"Digite a quantidade de elementos para ser feita a combinacao.\n";
        cin>>N1;
        cout<<"O numero de combinacoes e: "<<funcao_combinacao(N,N1)<<endl;
    break;
    case(16):
        system("cls");
        system("cls");
        cout<<"Digite a letra.\n";
        cin>>C;
        if(funcao_consoante(C)==1)
        {
            cout<<"A letra "<<C<<" e consoante.\n";
        }
        else
        {
            cout<<"A letra "<<C<<" e vogal.\n";
        }
        break;
    case(17):
        system("cls");
        cout<<"Digite a letra.\n";
        cin>>C;
        if(funcao_vogais(C)==1)
        {
            cout<<"A letra e uma vogal minuscula.\n";
        }
        else
        {
            cout<<"Nao e uma vogal minuscula.\n";
        }
        break;
    case(18):
            system("cls");
            cout<<"Digite uma palavra.\n";
            cin.ignore();
            cin.getline(V1,200);
            if(funcao_palindrome(V1))
            {
                cout<<"A palavra e um palindrome\n";
            }
            else
            {
                cout<<"A palavra nao e um palindrome.\n";
            }
            break;
    case(19):
            system("cls");
            cout<<"Digite um numero.\n";
            cin>>N;
            VD1=divisores_numero_perfeito(N);
            if(numero_perfeito(N)==1)
            {
                cout<<"O numero e perfeito, porque:\n";
                for(int i=0;i<tamanho_vetor_numero_perfeito(N);i++)
                {
                    cout<<VD1[i];
                    if(i<tamanho_vetor_numero_perfeito(N)-1)
                    {
                        cout<<"+";
                    }
                }
                cout<<" = "<<soma_divisores_numero_perfeito(N)<<endl;

            }
            else
            {
                cout<<"O numero nao e perfeito, porque:\n";
                for(int i=0;i<tamanho_vetor_numero_perfeito(N);i++)
                {
                    cout<<VD1[i];
                    if(i<tamanho_vetor_numero_perfeito(N)-1)
                    {
                        cout<<"+";
                    }
                }
                cout<<" = "<<soma_divisores_numero_perfeito(N)<<endl;
            }
            break;
    case(20):
            system("cls");
            cout<<"Digite a frase.\n";


            cin.ignore();
            cin.getline(V1,200);

            N=strlen(V1);

            funcao_lower_case(EV1,N);

            for(int i=0;i<N;i++)
            {
                cout<<V1[i];
            }

            cout<<endl;

            break;
    case(21):
            system("cls");
            cout<<"Digite a frase.\n";


            cin.ignore();
            cin.getline(V1,200);

            N=strlen(V1);

            funcao_upper_case(EV1,N);

            for(int i=0;i<N;i++)
            {
                cout<<V1[i];
            }

            cout<<endl;

            break;
    case(22):
        system("cls");
        cout<<"Digite o tamanho da caixa.\n";
        cin>>N;
        cout<<"Digite o caracter da borda.\n";
        cin>>C;
        cout<<"Digite a frase.\n";
        cin.ignore();
        cin.getline(V1,200);
        N2=strlen(V1);
        caixa_com_texto_centralizado(N,C,EV1,N1);
           break;
    case(23):
            system("cls");
            cout<<"Digite o primeiro Numero.\n";
            cin>>N;
            cout<<"Digite o segundo Numero.\n";
            cin>>N1;
            cout<<"Digite o terceiro Numero.\n";
            cin>>N2;

            ordenacao_crescente(N,N1,N2);

            cout<<"-----Numeros Ordenados-----"<<endl;
            cout<<N<<" "<<N1<<" "<<N2<<endl;
        break;

    case(24):
        system("cls");
        cout<<"Digite o primeiro valor.\n";
        cin>>N;
        cout<<"Digite o segundo numero.\n";
        cin>>N1;

        funcao_troca(N,N1);

        cout<<N<<" "<<N1<<endl;
        break;
    case(25):
        system("cls");
        cout<<"Digite a Frase.\n";
        cin.ignore();
        cin.getline(V1,200);

       cout<<"O vetor tem: "<<contagem_vetor(EV1)<<endl;


        break;
    case(26):
        system("cls");
        cout<<"Digite a primeira frase.\n";
        cin.ignore();
        cin.getline(V1,200);
        cout<<"Digite a segunda frase.\n";
        cin.getline(V2,100);
        N=strlen(EV1);
        N1=strlen(EV2);

        cout<<funcao_maior_frase(EV1,EV2,N,N1)<<endl;

        break;
    case(27):
        system("cls");
        cout<<"Digite a primeira Frase.\n";
        cin.ignore();
        cin.getline(V1,200);
        cout<<"Digite a segunda Frease.\n";
        cin.getline(V2,200);

        N=strlen(V1);
        N1=strlen(V2);

        PCD=funcao_concatenar(EV1,EV2,N,N1);

        for(int i=0;i<(N+N1);i++){
            cout<<PCD[i];
        }
        cout<<endl;
        delete PCD;
        break;
    case (28):
        system("cls");
        cout<<"Digite os caracteres numericos de 0 a 9.\n";

        cin.ignore();
        cin.getline(V1,200);

        N=strlen(V1);

        VD1=convert_char_int(EV1,N);

        for(int i=0;i<N;i++){
            cout<<VD1[i];
        }

        cout<<endl;
        delete VD1;
        break;

    case 29:
        system("cls");
        cout<<"Digite a frase.\n";
        cin.ignore();
        cin.getline(V1,200);

        N=strlen(V1);

        funcao_troca_troca(EV1,N);

        for(int i=0;i<N;i++){
            cout<<V1[i];
        }

        cout<<endl;

        break;

    case 30:
        system("cls");
        cout<<"Digite a frase.\n";
        cin.ignore();
        cin.getline(V1,200);

        N=strlen(V1);

        VCD= funcao_retira_espaco_branco(EV1,N);

        for(int i=0;i<N;i++){
            cout<<VCD[i];
        }
        cout<<endl;
        break;

    case 31:
        system("cls");
        cout<<"Digite a frase.\n";
        cin.ignore();
        cin.getline(V1,200);

        cout<<"Digite o caracter para cortar a frase.\n";
        cin>>C;

        N=strlen(V1);

        MCD= funcao_separa_palavras(EV1,C,N,N1);

        for(int i=0,j=0;i<N1;i++){
              for(int k=0;EV1[j]!=C && j<N;j++){
                  if(EV1[j+1]==C){
                      cout<<MCD[i][k];
                      k=0;
                  }
                  else{
                      cout<<MCD[i][k];
                      k++;
                  }
              }
              j++;
              cout<<endl;
          }

        funcao_deleta_matriz(MCD,N1);
        break;

    case 32:
        system("cls");
        cout<<"Digite a primeira frase.\n";
        cin.ignore();
        cin.getline(V1,200);

        cout<<"Digite a segunda frase.\n";
        cin.ignore();
        cin.getline(V2,200);

        cout<<"A primeira ocorrencia ocorre no algarismo: "<<funcao_corta_string(EV1,EV2)<<endl;

        break;

    case 33:
        system("cls");
        cout<<"Digite o primeiro Numero.\n";
        cin>>V1;
        cout<<"Digite o segundo numero.\n";
        cin>>V2;

      V3=funcao_numeros_gigantes(EV1,EV2,N,F);
        if(F==1){
            for(int i=0;i<N+1;i++){
               V3[i]=V3[i]+48;
            }
            for(int i=0;i<N+1;i++){
                cout<<V3[i];

        }
        }
        else{
            for(int i=0;i<N;i++){
                V3[i]=V3[i+1];
            }
            for(int i=0;i<N;i++){
               V3[i]=V3[i]+48;
            }

            for(int i=0;i<N;i++){
                cout<<V3[i];
            }
            }

        cout<<endl;


        break;
    case 34:
        system ("cls");

        cout <<"Digite a quantidade de numeros.\n";
        cin>>N;




        cout<<"Digite os numeros.\n";
        for(int i=0;i<N;i++){
                cin>>VI1[i];
        }

        funcao_maior_menor(EVI1,N,N1,N2);

        cout<<"Maior numero:"<<N1<<" | Menor numero:"<<N2<<endl;

        break;
    case 35:
        system("cls");

        cout<<"Digite o tamanho da matriz.\nDigite o numero de linhas: ";
        cin>>N;
        cout<<"Digite o Numero de colunas: ";
        cin>>N1;
        cout<<endl;

        M1=criar_matriz_dinamica(N,N1);
        M2=criar_matriz_dinamica(N,N1);

        cout<<"Preencha a primeira matriz.\n";
        for(int i=0;i<N;i++){
            for(int j=0;j<N1;j++){
                cin>>M1[i][j];
            }
        }

        cout<<"Preencha  a segunda matriz.\n";
        for(int i=0;i<N;i++){
            for(int j=0;j<N1;j++){
                cin>>M2[i][j];
            }
        }

        MN3=soma_de_matrizes(N,N1,M1,M2);

        for(int i=0;i<N;i++){
            for(int j=0;j<N1;j++){
                cout<<M1[i][j];
                cout<<"|";
            }

            cout<<" + ";

            for(int j2=0;j2<N1;j2++){
               cout<<M2[i][j2];
               cout<<"|";
            }

            cout<<" = ";

            for(int j3=0;j3<N1;j3++){
               cout<<MN3[i][j3];
               cout<<"|";
            }
            cout<<endl;
        }
       funcao_deleta_matriz_int(M1,N);
       funcao_deleta_matriz_int(M2,N);
       funcao_deleta_matriz_int(MN3,N);

        break;


    }






return 0;
}
