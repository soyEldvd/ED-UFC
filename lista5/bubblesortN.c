#include <stdio.h>
#include <stdlib.h>

int i, j;

void bubbleSort();
int main (){
    int l;

    //digite o tamanho do vetor
    scanf("%d", &l);

    int v[l];

    printf("\n");
    for(i = 0; i < l; i++){
        //digite os valores da lista
        scanf("%d", &v[i]);
    }
    
    bubbleSort(v, l);

    return 0;
}

void bubbleSort (int v[], int l){ //esse bubble sort tem complexidade de O(n)
    int aux;
    int check = 1; //uma variavel para dizer se houve ou nao uma troca

    while (check == 1){
        check = 0; //se a troca nao for realizada, ele não entra mais no laço pois a ordem nao foi alterada e assim ele nao fara comparaçoes inuteis
        i = 0;
        while (i < l){
            if (v[i] > v[i + 1]){
                aux = v[i + 1];
                v[i + 1] = v[i];
                v[i] = aux;
                check = 1; //quando a troca eh realizada ele muda o seu valor para 1 (verdadeiro)
            }
            i++;
        }
    }

/* isso aqui eh so para printar
    printf("[");
       for(i = 0; i < l; i++){
        //digite os valores da lista
        printf("%d ", v[i]);
    }
    printf("]");
/*
}