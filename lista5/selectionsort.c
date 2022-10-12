#include <stdio.h>
#include <stdlib.h>

int i, j;

void selectionSort();
int main (){
    int n;

    //digite o tamanho do vetor
    scanf("%d", &n);

    int l[n];

    printf("\n");
    for(i = 0; i < n; i++){
        //digite os valores da lista
        scanf("%d", &l[i]);
    }

    selectionSort(l, n);

    return 0;
}
void selectionSort(int l[], int n){
    int aux;

    for(i = 0; i < n - 1; i++){ //vou do zero até o l - 1, pois a partir deste não poderá ser feitas outras comparações
        int posminima = i;//a posiçao minima sera o valor de i, sacou? pq depois de mudar a posição o vetor "muda"

        for(j = i; j < n; j++){//laço para percorrer o vetor e achar a posição do minimo
            if(l[j] < l[posminima]){
                posminima = j;
            }
        }

        if(l[i] > l[posminima]){ //se o valor atual e maior que o que tá em posição minima, muda eles de lugar
            aux = l[i];
            l[i] = l[posminima];
            l[posminima] = aux;
        }
    }
/* apenas para printar

    for(i = 0; i < n; i++){
        printf("%d ", l[i]);
    }
*/
}