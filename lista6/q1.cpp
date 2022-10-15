#include <cstdio>

int i, j;

class fila{
    public:
        int* vetor; //ponteiro para a alocação dinâmica
        int tamax; //o tamanho máximo da fila
        int inicio; //o começo da fila
        int fim; //o final da fila
        int count; //variável que nos ajudará a saber qunatas pessoas estão na fila

    //método para inicializar a fila
    fila(int n){
        vetor = new int[n];
        tamax = n;
        inicio = -1;
        fim = -1; 
        count = 0;
    }

    //metodo para enfileirar as paradas (inserir valores)
    void enfileirar(int x){ //x eh o valor que ele vai enfileirar
        if(count < tamax){
            fim = (fim+1) % tamax; //se o fim for maior que o tamax, ele volta a preencher no inicio da fila
            count++; //aumento o tamanho da lista
            vetor[fim] = x; //coloco o valor do vetor na lista
        }
    }

    //método para desenfileirar as paradas (remover valores)
    int desenfileirar(){
        int a;
        if(count != 0){
            inicio = (inicio + 1) % tamax;
            count--;
            a = vetor[inicio];
            return a;
        }
    }

    //método que confere se a fila está vazia
    int vazia(){
        return count ==0;
    }
};

int main(){
    int tamanho = 10; 

    fila f(tamanho);
    //preenchendo  o vetor
    for(i = 0; i < 10; i++){
        f.enfileirar(i);
    }
    for(i = 0; i < 5; i++){
        printf(" %d , ", f.desenfileirar());
    }
    printf("\n");

    for(i = 0; i < 5; i++){
        f.enfileirar(i);
    }
    
    while(!f.vazia()){
        printf(" %d , ", f.desenfileirar());
    }


    return 0;
}