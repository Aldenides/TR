#include "minhalib.h"

using namespace std;

void linha(){
    for(int i=0;i<25;i++){
        cout<<"*";
    }
    cout<<endl;
}

void linha2(char A){
    for(int i=0;i<25;i++){
        cout<<A;
    }
    cout<<endl;
}

void DESENHA_RETANGULO_SOLIDO(int L,int C,char S)
{
    for(int i=0;i<C;i++){
        for(int j=0;j<L;j++){
             cout<<S;
        }
        cout<<endl;
    }

}

void DESENHA_RETANGULO_SOLIDO2(int L,int C,char S)
{
    for(int i=0;i<C;i++){
        for(int j=0;j<L;j++){
            if(i>0 && i<C-1){
                if(j==0 || j==L-1){
                  cout<<S;
                }
                else{
                    cout<<' ';
                }
            }
            else{
             cout<<S;
            }
        }
        cout<<endl;
    }

}

void DESENHA_RETANGULO_PREENCHIDO(int L,int C,char S,char P)
{
    for(int i=0;i<C;i++){
        for(int j=0;j<L;j++){
            if(i>0 && i<C-1){
                if(j==0 || j==L-1){
                  cout<<S;
                }
                else{
                    cout<<P;
                }
            }
            else{
             cout<<S;
            }
        }
        cout<<endl;
    }

}

void funcao_raio(double R)
{
    cout<<"A area e: "<<3.14*(R*R)<<endl;
}

void funcao_media(float N1,float N2,double N3)
{
    cout<<"A media e: "<<(N1+N2+N3)/3<<endl;
}

void funcao_volume(double R)
{
    double E,V;
    E=pow(R,3);
    V=(E*12.56)/3;
    cout<<"O volume e: "<<V<<endl;
}

void funcao_semestre(int N)
{
    if(N<1 || N>6)
    {
        cout<<"ERROOO, NUMEROS ACEITOS DE 1 A 6.\n";
        return ;
    }
    switch (N) {
    case 1:
        cout<<"Janeiro.\n";
        break;
    case 2:
        cout<<"Fevereiro.\n";
        break;
    case 3:
        cout<<"Marco.\n";
        break;
    case 4:
        cout<<"Abril.\n";
        break;
    case 5:
        cout<<"Maio.\n";
        break;
    case 6:
        cout<<"Junho.\n";
        break;
    }
}

int funcao_logaritmo(int LT, int B)
{
    int i,R;
    R=0;
    for(i=0;R!=1;i++){
        R=LT/B;
        LT=R;
    }
    return i;
}

int funcao_fatorial(int N)
{
   int R=N*(N-1);
   for(int i=N-2;i>0;i--)
   {
      R=R*i;
   }
   return R;
}

bool funcao_primo(int N)
{
   int K=0,i,R;
   if(N==1){
       K=1;
       return K;
   }
       for(i=2;i<N;i++)
       {
          R=N%i;
          if(R==0)
          {
              K=1;
              i=N;
          }
       }

   return K;
}

int funcao_fibonacci(int N)
{
    int V[100];
    for(int i=0;i<N;i++)
    {
       if(i<2)
       {
        V[i]=i;
       }
       else
       {
         V[i]=V[i-2]+V[i-1];
       }
    }

   return V[N-1];
}

bool funcao_regular(int N)
{
    int R=0;
    for(int i=1;R<N;i++)
    {
        R=0;
        R=pow(2,i);
        R=R*3*5;
    }
    if(R==N)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int funcao_combinacao(int N, int P)
{
    int F1,F2,F3,X;
    F1=N*(N-1);
    for(int i=N-2;i>0;i--){
        F1=F1*i;
    }
    X=N-P;
    F2=X*(X-1);
    for(int i=X-2;i>0;i--){
        F2=F2*i;
    }
    F3=P*(P-1);
    for(int i=P-2;i>0;i--)
    {
        F3=F3*i;
    }
    return F1/(F3*F2);
}

bool funcao_consoante(char X)
 {
    if(X=='a' || X=='e' || X=='i' || X=='o' || X=='u' || X=='A' || X=='E' || X=='I' || X=='O' || X=='U')
    {
        return 0;
    }
    else
    {
        return 1;
    }
 }

bool funcao_vogais(char X)
 {
    if(X=='a' || X=='e' || X=='i' || X=='o' || X=='u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
 }

bool funcao_palindrome(char *T)
 {
    int i,j;

    j= strlen(T)-1;

    for(i=0;i<j;i++,j--)
    {

        if(T[i]!=T[j])
        {

            return 0;
        }
    }

    return 1;
 }

int tamanho_vetor_numero_perfeito(int N)
 {
     int T=0,K=N/2;
     for(int j=0,i=1;i<K+1;i++)
    {
        if(N%i==0)
        {
            T=T+1;
        }
    }

      return T;

 }

int* divisores_numero_perfeito(int N)
 {
    int K=N/2;
    int* D= new int [K];

    for(int j=0,i=1;i<K+2;i++)
    {

        if(N%i==0)
        {
            D[j]=i;
            j++;
        }
    }

      return D;
 }

int soma_divisores_numero_perfeito(int N)
 {
    int* D=divisores_numero_perfeito(N);
    int R=0;

    for(int i=0;i<tamanho_vetor_numero_perfeito(N);i++)
    {
        R=D[i]+R;
    }
    delete[] D;
    return R;
 }

bool numero_perfeito(int N)
 {
    int R=soma_divisores_numero_perfeito(N);
    if(R==N)
    {
        return 1;
    }
    else
    {
        return 0;
    }
 }

void funcao_lower_case(char* E,int N)
{
    for(int i=0;i<N;i++)
    {
        if(E[i]<='Z' && E[i]>='A')
         {
            E[i]=E[i]+('a'-'A');
         }
    }
}

void funcao_upper_case(char* E,int N)
{
    for(int i=0;i<N;i++)
    {
        if(E[i]<='z' && E[i]>='a')
         {
            E[i]=E[i]-('a'-'A');
         }
    }
}

void caixa_com_texto_centralizado(int N, char X, char* E, int N2 )
 {
    for(int i=0;i<N;i++)
    {
        cout<<X;
    }
    cout<<endl;
    cout<<X;
    int R;
    R=(N-2)-N2;
    if(R%2!=0)
    {
        int R1;
        R1=(R-1)/2;
        for(int i=0;i<R1;i++)
        {
            cout<<" ";
        }
        for(int i=0;i<N2;i++)
        {
            cout<<E[i];
        }
        R1=(R-1)/2;
        R1++;
        for(int i=0;i<R1;i++)
        {
            cout<<" ";
        }
        cout<<X<<endl;
    }
    else
    {
        R=R/2;
        for(int i=0;i<R;i++)
        {
            cout<<" ";
        }

        for(int i=0;i<N2;i++)
        {
            cout<<E[i];
        }

        for(int i=0;i<R;i++)
        {
            cout<<" ";
        }
        cout<<X<<endl;
    }

    for(int i=0;i<N;i++)
    {
        cout<<X;
    }
    cout<<endl;

 }

void ordenacao_crescente(int &N1, int &N2, int &N3){
    int aux;

    if(N2>N3){
        aux=N3;
        N3=N2;
        N2=aux;
    }
    if(N1>N3){
        aux=N3;
        N3=N1;
        N1=aux;
    }
    if(N1>N2){
        aux=N2;
        N2=N1;
        N1=aux;
    }



}
void funcao_troca(int &N1, int &N2){
    int aux;

    aux=N2;
    N2=N1;
    N1=aux;
}

int funcao_maior_frase(char* PC,char* PC2,int N1,int N2){
    int N;

    for(int i=0;i<N1;i++){
        if(PC[i]<='Z' && PC[i]>='A')
        {
            PC[i]=PC[i]+('a'-'A');
        }
    }

    for(int i=0;i<N2;i++)
    {
        if(PC2[i]<='Z' && PC2[i]>='A')
        {
            PC2[i]=PC2[i]+('a'-'A');
        }
    }

    if(N1<N2){
        N=N1;
    }
    else{
        N=N2;
    }
    for(int i=0;i<N;i++){
        if(PC[i]>PC2[i]){
            return -1;
        }
        if(PC[i]<PC2[i]){
            return 1;
        }
        if(N1==N2 && i==N-1){
            return 0;
        }

        if(i==N-1 && N1<N2){
            return 1;
        }
        if(i==N-1 && N1>N2){
            return -1;
        }

    }
}

int contagem_vetor(char* PC){

    return strlen(PC);
}

char* funcao_concatenar(char* PC,char* PC2, int N1,int N2){
    char* PCD= new char(200);
    int i,j;
    for(i=0;i<N1;i++){
        PCD[i]=PC[i];
    }
    N2=N2+N1;
    for(j=0;i<N2;j++,i++){
        PCD[i]=PC2[j];
    }

    return PCD;
}

int* convert_char_int(char* EV1,int N){
    int* VD1= new int (N);
    for(int i=0;i<N;i++){
        VD1[i]=EV1[i];
    }

    return VD1;
}

void funcao_troca_troca(char* EV1,int N){

    for(int i=0;i<N;i++)
            {
                if(EV1[i]<='Z' && EV1[i]>='A')
                 {
                    EV1[i]=EV1[i]+('a'-'A');
                 }
                else{
                    EV1[i]=EV1[i]-('a'-'A');
                }
            }

}

char* funcao_retira_espaco_branco(char* EV1,int &N){

    char*VCD= new char (N);

    if(EV1[0]==' '){
        for(int i=0,k=1;i<N;i++,k++){
          VCD[i]=EV1[k];
        }
    if(EV1[N-1]==' '){
        N=N-1;

    }
}
    return VCD;
}

char** funcao_separa_palavras(char* EV1,char C,int N,int &N1){
    int SINALSEREPETE=0;

    for(int i=0;i<N;i++){
        if(EV1[i]==C){
            SINALSEREPETE++;
        }
    }
    SINALSEREPETE++;

    char** VCD=new char* [SINALSEREPETE];//Cria vetores de ponteiros de char.


    for(int i=0,K=0,L=0;i<N;i++){//Cria os vetores de char.

       if(EV1[i]!=C){
           K++;
       }

       else{
           VCD[L]=new char (K);
           L++;
           K=0;
      }
       if(i==N-1){
           VCD[L]=new char (K);

      }

    }

  for(int i=0,j=0;i<SINALSEREPETE;i++){//Atribui textos aos vetores
        for(int l=0;EV1[j]!=C && j<N ;j++,l++){
                VCD[i][l]=EV1[j];
        }
        j++;
    }

    N1=SINALSEREPETE;
    return VCD;
}

void funcao_deleta_matriz(char** MCD,int N1){

    for(int i=0;i<N1;i++){
        delete MCD[i];
    }

    delete MCD;
}

int funcao_corta_string(char* EV1,char* EV2){
    int N=strlen(EV1),N1=strlen(EV2),V=-1;

    for(int i=0;i<N;i++){
        if(EV1[i]==EV2[0]){
            for(int j=i,k=0;k<N1;j++,k++){
                if(EV1[j]==EV2[k]){
                    V=i;
                }
                else{
                    V=-1;
                    k=N1;
                }
            }
         if(i==V){
             return V-1;
         }
        }
    }
}

char* funcao_numeros_gigantes(char* EV1, char* EV2,int &N,int &F){
    int N1=strlen(EV1),N2=strlen(EV2);
    N=0;
    if(N1==N2){
        N=N1;
    }

    if(N1<N2){
        for(int i=N1-1,j=N2-1;i>=0;i--,j--){
            EV1[j]=EV1[i];
        }

        for(int i=0;i<N2-N1;i++){
            EV1[i]='0';
        }
        N=N2;
    }



    if(N1>N2){
        for(int i=N2-1,j=N1-1;i>=0;i--,j--){
            EV2[j]=EV2[i];
        }

        for(int i=0;i<N1-N2;i++){
            EV2[i]='0';
        }
        N=N1;
    }

    char* V3=new char[N+1];
    F=0;
    for(int i=N;i>=1;i--){
        int R=(EV1[i-1]+EV2[i-1])-96;

        if(R>9 && i>0){
          V3[i]=R-10;

          EV1[i-2]++;
        }

       if(i==1){
           if(R>9){
            V3[i]=R-10;
            V3[0]=1;
            F=1;
           }
           else{
            V3[i]=R;
           }
        }
       if(i>1 && R<10){
        V3[i]=R;
       }

    }

    if(F==1){
        for(int i=0;i<N+1;i++){
           V3[i]=V3[i]+48;
        }
        N++;
    }
    else{
        for(int i=0;i<N;i++){
            V3[i]=V3[i+1];
        }
        for(int i=0;i<N;i++){
           V3[i]=V3[i]+48;
        }


        }

    return V3;
}

void funcao_maior_menor(int *EVI1,int N, int &N1, int &N2){
    N1=EVI1[0];
    N2=EVI1[0];

    for(int i=0;i<N;i++){
        if(N1<EVI1[i]){
            N1=EVI1[i];
        }
    }

    for(int i=0;i<N;i++){
        if(N2>EVI1[i]){
            N2=EVI1[i];
        }
    }
}

int** criar_matriz_dinamica(int N,int N1){
    int** MD=new int* [N];

    for(int i=0;i<N;i++){
        MD[i]=new int [N1];
    }

    return MD;
}

int** soma_de_matrizes(int N,int N1,int** M1,int**M2){
    int** M3;
    M3=criar_matriz_dinamica(N,N1);

    for(int i=0;i<N;i++){
        for(int j=0;j<N1;j++){
            M3[i][j]=M1[i][j]+M2[i][j];
        }
    }
    return M3;
}

void funcao_deleta_matriz_int(int** MID,int N){

    for(int i=0;i<N;i++){
        delete MID[i];
    }

    delete MID;
}
