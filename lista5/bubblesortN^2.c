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
}

void bubbleSort(int v[], int l){
    int aux;
    for(j = 0; j < l; j++){ //percorro o vetor do 0 até o l
        for(i = 0; i < l - 1; i++){ //e comparo com o elemento que está na sua frente ''''o l -1 e pq nao tem ngm na frente do ultimo valor
            if(v[i] > v[i + 1]){
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux; 
            }
        }
    }
    printf("[");
       for(i = 0; i < l; i++){
        //digite os valores da lista
        printf("%d ", v[i]);
    }
    printf("]");
}