#include <stdio.h>
#include <stdlib.h>
/*
Considere um vetor de inteiros L de
tamanho 2n que contenha n números ímpares e n números pares.
L: 16 19 41 8 42 39 33 22 29 48
Escreva um programa que coloca os númros pares nas posições pares e o ímpares nas posições
ímpares.
*/
void paridade();
int main (){
    int m;
    int i = 0;

    printf("digite o tamanho do vetor: ");
    scanf("%d", &m);

    int l[m];

    for (i = 0; i < m; i++){
        printf("digite o %d do vetor: ", i + 1);
        scanf("%d", &l[i]);
    }

    paridade(l, m);

    return 0;
}

void paridade (int l[], int m){
    int j = 0;
    int i;
    int aux;

    while (j < m){
        if(j % 2 == 0){
            if(l[j] % 2 == 0){
                j++;
            }
            else{
                for(i = j; i < m; i++){
                    if(l[i] % 2 == 0){
                        aux = l[j];
                        l[j] = l[i];
                        l[i] = aux;
                        break;
                    }
                }
            }
        }
        else{
            if(l[j] % 2 != 0){
                j++;
            }
            else{
                for(i = j; i < m; i++){
                    if(l[i] % 2 != 0){
                        aux = l[j];
                        l[j] = l[i];
                        l[i] = aux;
                        break;
                    }
                }
            }
        }
    }

    for(i = 0; i < m; i ++){
        printf("%d\n", l[i]);
    }
}