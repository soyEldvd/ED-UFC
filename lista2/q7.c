#include <stdio.h>
#include <stdlib.h>

void topos();
int main (){
    int n, i;

    printf("digite o tamanho do vetor: ");
    scanf("                      %d", &n);

    int l[n];

    for(i = 0; i < n; i++){
        printf("digite o %d valor do vetor: ", i + 1);
        scanf("                           %d", &l[i]);
    }
//16 19 22 8 42 39 33 22 29 48

    topos(l, n);

    return 0;
}
void topos(int l[], int n){
    int j;

    for(j = 0; j < n; j++){
        if(l[j - 1] < l[j] && l[j] > l[j + 1]){
            printf("%d eh um topo\n", l[j]);
        }
    }
}