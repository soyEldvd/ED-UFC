#include <stdio.h>
#include <stdlib.h>

int i, j, k; //contadores

int countInv();
int main (){
    int n;

    //digite o tamanho do vetor
    scanf("%d", &n);

    int l[n];

    printf("\n\n");

    for(i = 0; i < n; i ++){
        //digite o i+1 termo do vetor
        scanf("%d", &l[i]);
    }

    printf("ha %d inversoes", countInv(l, n));

    return 0;
}

int countInv(int l[], int n){
    int count = 0;

    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            if(l[i] > l[j] && i < j){
                count++;
            }
        }
    }

    return count;
}