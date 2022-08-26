#include <stdio.h>
#include <stdlib.h>

void diff();
int main (){
    int n, i;

    printf("digite o tamanho do vetor: ");
    scanf("                      %d", &n);

    int l[n];

    for(i = 0; i < n; i++){
        printf("digite o %d valor do vetor: ", i + 1);
        scanf("%d", &l[i]);
    }

    diff(l, n);

    return 0;
}

void diff(int l[], int n){
    int maior, menor, j;

    for (j = 0; j < n; j ++){
        if(j == 0 ){
            maior = l[j];
            menor = l[j];
        }
        else {
            if(l[j] > maior){
                maior = l[j];
            }
            if(l[j] < menor){
                menor = l[j];
            }
        }
        
    }

    printf("maior: %d \nmenor: %d", maior, menor);

}