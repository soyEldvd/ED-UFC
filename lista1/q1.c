#include <stdio.h>
#include <stdlib.h>

void swap();
int main (){
    int i;
    int vet[10] = {16, 19, 41, 8, 42, 39, 33, 22, 29, 48};
    int newvet[10];

    for (i = 0; i < 10; i++){
        if(i % 2 == 0){
            if(vet[i] % 2 == 0){
                newvet[i] = vet[i];
            }
        }
        else if(i % 2 != 0){
            
        }
    }

    printf("o novo vetor eh:\n");

    for(i = 0; i < 10; i++){
        printf("\n%d", newvet[i]);
    }

    return 0;
}