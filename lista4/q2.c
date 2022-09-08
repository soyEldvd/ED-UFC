#include <stdio.h>
#include <stdlib.h>

void merge3();
int main (){
    int n, i;

    //digite o tamanho do vetor
    scanf("%d", &n);

    int l[n];

    printf("\n\n");

    for(i = 0; i < n; i ++){
        //digite o i+1 termo do vetor
        scanf("%d", &l[i]);
    }

    merge3(l, n);

    return 0;
}

void merge3(int l[], int n){
    int maux[n], j, k, aux;

    for(j = 0; j < n; j++){
        for(k = j; k < n; k++){
            if(l[j] > l[k]){
                aux = l[j];
                l[j] = l[k];
                l[k] = aux;
                maux[j] = l[j];
                maux[k] = l[k];
            }
            else{
                if(l[j] < l[k]){
                    maux[j] = l[j];
                    maux[k] = l[k];
                }
            }
        }
    } 
    printf("[");
    for(k = 0; k < n; k++){
        printf("%d, ", maux[k]);
    }
    printf("]");

    /*
    a complexidade é da ordem de O(n²)
    */

}