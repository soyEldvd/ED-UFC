#include <stdio.h>
#include <stdlib.h>

void soma();
int main (){
    int n, i;

    printf("digite o tamanho do vetor: ");
    scanf("                      %d", &n);

    int l[n];

    for(i = 0; i < n; i++){
        printf("digite o %d valor do vetor: ", i + 1);
        scanf("                           %d", &l[i]);
    }

    soma(l, n);

    return 0;
}
void soma (int l[], int n){
    int soma;
    int j, k, aux;

    printf("digite um numero qualquer: ");
    scanf("                   %d", &soma);

    for(j = 0; j < n; j++){
        for(k = j + 1; k < n; k++){
            if(l[j] + l[k] == soma){
                printf("%d somado a %d eh igual a %d \n", l[j], l[k], soma);
            }
        }
    }
}