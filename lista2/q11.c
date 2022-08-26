#include <stdio.h>
#include <stdlib.h>

void troca();
int main (){
    int n, i;

    printf("digite o tamanho do vetor: ");
    scanf("                      %d", &n);

    int l[n];
    int v[n];

    for(i = 0; i < n; i++){
        printf("digite o %d valor do vetor l: ", i + 1);
        scanf("%d", &l[i]);
    }

    for(i = 0; i < n; i++){
        printf("digite o %d valor do vetor v: ", i + 1);
        scanf("%d", &v[i]);
    }

    troca(l ,v, n);

    return 0;
}
void troca (int l[], int v[], int n){
    int menorl = l[0], maiorv = v[0], posl, posv;
    int j, k, aux;

    do{
        for(j = 0; j < n; j++){
            if(l[j] < menorl){
                menorl = l[j];
                posl = j;
            }
        }

        for(k = 0; k < n; k++){
            if(l[k] > maiorv){
                maiorv = v[k];
                posv = k;
            }
        }

        aux = l[posl];
        l[posl] = v[posv];
        v[posv] = aux;

    } while (menorl < maiorv);

}
