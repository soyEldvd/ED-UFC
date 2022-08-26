#include <stdio.h>
#include <stdlib.h>

void smaior();
int main (){
    int n, i;

    printf("digite o tamanho do vetor: ");
    scanf("                      %d", &n);

    int l[n];

    for(i = 0; i < n; i++){
        printf("digite o %d valor do vetor: ", i + 1);
        scanf("%d", &l[i]);
    }

    smaior (l , n);

    return 0;
}

void smaior (int l[], int n){
    int primeiro, segundo, j;

    for (j = 0; j < n; j ++){
        if(j == 0){
            primeiro = l[j];
            segundo = l[j];
        }
        else{
            if(primeiro < l[j]){
                segundo = primeiro;
                primeiro = l[j];
            }
        }
    }

    printf("o segundo maior eh: %d", segundo);
}