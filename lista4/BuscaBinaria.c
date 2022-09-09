#include <stdio.h>
#include <stdlib.h>

int check();
int buscaBi();

int i;
int main (){
    int n, chave, fim;

    //digite o tamanho do vetor
    scanf("%d", &n);

    int l[n];

    printf("\n\n");

    for(i = 0; i < n; i++){
        //digite o i + 1 termo do vetor
        scanf("%d", &l[i]);
    }

    fim = n - 1;

    printf("diigte a chave: " );
    scanf("     %d", &chave);

    printf("a chave esta na posicao %d do vetor", buscaBi(l, fim, chave));

    return 0;
}

int buscaBi(int l[], int fim, int chave){
    int inicio = 0; //  0 1 2 3 | 4 5 6 7 
    int meio = (inicio + fim) / 2;
    //3

    while(inicio <= fim){
        if(chave == l[meio]){
            return meio;
        }
        else{
            if(chave < l[meio]){
                fim = meio - 1;
            }
            else{
                inicio = meio + 1;
            }
        }
        meio = (inicio + fim) / 2;
    }

    return -1;
}

