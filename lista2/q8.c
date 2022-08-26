#include <stdio.h>
#include <stdlib.h>

void toposCrescentes();
int main (){
    int n, i;

    printf("digite o tamanho do vetor: ");
    scanf("                      %d", &n);

    int l[n];

    for(i = 0; i < n; i++){
        printf("digite o %d valor do vetor: ", i + 1);
        scanf("                           %d", &l[i]);
    }
//16 19 22 8 42 39 33 22 29 48

    toposCrescentes(l, n);

    return 0;
}
void toposCrescentes(int l[], int n){
    int j, k, qntd = 0, aux;
    int tops[n/2];

    for(j = 0; j < n; j++){ //criando o vetor com os topos.
        if(l[j - 1] < l[j] && l[j] > l[j + 1]){
            tops[qntd] = l[j];
            qntd++;
        }
    }

    for(j = 0; j < qntd; j++){ //ordenando em ordem crescente
        for(k = j; k < qntd - 1; k++){
            if(tops[j] > tops[k]){
                aux = tops[j];
                tops[j] = tops[k];
                tops[k] = aux;
            }
        }
    }

    for(j = 0; j < qntd; j++){
        printf(" %d ", tops[j]);
    }

}