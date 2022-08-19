#include <stdio.h>
#include <stdlib.h>

void inverte();
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

    inverte(l, m);

    return 0;
}

void inverte(int l[], int m){
    int aux;
    int k = 0;

    while (j > m/2){
        aux = l[k];
        l[k] = l[m - k - 1];
        k++;
    }

    for(k = 0; k < m; k++){
        printf("%d\n", l[k]);
    }
}

