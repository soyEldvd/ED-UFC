#include <stdio.h>
#include <stdlib.h>

void troca();
int main (){
    int m, n;
    int i = 0;

    printf("digite o tamanho do vetor: ");
    scanf("%d", &m);

    int l[m];

    for (i = 0; i < m; i++){
        printf("digite o %d do vetor: ", i + 1);
        scanf("%d", &l[i]);
    }

    troca (l, m);

    return 0;
}

void troca(int l[], int m){
    int j = m - 2;
    int aux;
    int k = 0;

    while (j >= 0){
        aux = l[j + 1];
        l[j + 1] = l[j];
        l[j] = aux;
        j--;
    }

    for(k = 0; k < m; k++){
        printf("\n%d", l[k]);
    }
}

