#include <stdio.h>
#include <stdlib.h>

void repet();
int main (){
    int n, i;

    printf("digite o tamanho do vetor: ");
    scanf("                      %d", &n);

    int l[n];

    for(i = 0; i < n; i++){
        printf("digite o %d valor do vetor: ", i + 1);
        scanf("%d", &l[i]);
    }

    repet(l , n);
}

void repet(int l[], int n){
    int j, c, repeat;

    for (j = 0; j < n; j++){
        for(c = j + 1; c < n; c++){
            if(l[j] == l[c]){
                repeat = l[c];
            }
        }
    }

    printf("elemento repetido: %d", repeat);
}