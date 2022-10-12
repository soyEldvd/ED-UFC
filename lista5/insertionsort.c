#include <stdio.h>
#include <stdlib.h>

int i, j;

void insertionSort();
int main (){
    int n;

    scanf("%d", &n);

    int l[n];

    for (i = 0; i < n; i++){
        scanf("%d", &l[i]);
    }

    insertionSort(l, n);

    return 0;
}

void insertionSort(int l[], int n){
    for(i = 1; i < n; i++){
        int chave = l[i];
        j = i - 1;

        while(j >= 0 && chave < l[j]){
            l[j + 1] = l[j];
            j--;
        }
        l[j + 1] = chave;
    }

/* printando
    printf("[");
       for(i = 0; i < n; i++){
        //digite os valores da lista
        printf(" %d\t", l[i]);
    }
    printf("]");
*/
}