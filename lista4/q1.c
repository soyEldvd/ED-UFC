#include <stdio.h>
#include <stdlib.h>

void busca_trinaria();
int main(){
    int t, i;

    scanf("%d" , &t);

    int v[t];

    for(i = 0 ; i < t ; i++){
        scanf("%d" , &v[i]);
    }

    busca_trinaria(t,v);
}

void busca_trinaria(int t, int v[]){
    printf("digite qual numero deseja buscar");

    int num;

    scanf("%d" , &num);

    int i = 0 , j = t , pterc , sterc;

    pterc = t / 3;
    sterc = 2 * t / 3;

    if(num < v[pterc]){
        j = pterc;
    }
    else if(num > v[pterc] && num < v[sterc]){
        i = pterc;
        j = sterc;
    }
    else{
        i = pterc;
    }

    while(i<=j){
        if(v[i] == num){
            printf("Achou na posicao %d" , i);
            return 0;
        }
        i++;
    }
}


