/*
    FILA
        -> fila é um tipo de estrutura de dados em que, assim como uma fila normal, para inserir novos elementos é só no final da fila
        e para tirar elementos somente no inicio da fila

        -> em estrutura de dados, também só é possível acessar valores da fila pelo inicio, não se pode "olhar" qualquer elemento da fila
        
    OPERAÇÕES BÁSICAS DA FILA
        -> podemos adicionar novos elementos na lista (emfileirar) **somente pelo fim**
        -> podemos retirar elementos na lista (desinfileirar) **somente no inicio**
        -> podemos acessar os itens da fila, mas somente pelo inicio
        -> destruir uma fila quando esta está vazia (tamanho = 0)
    
    CONSTRUINDO UMA FILA
        -> a melhor forma de se construir uma fila (enfileirar) é colocando os valores sempre na última posição da fila
        -> há casos em que a última posição é a primeira tbm.
        -> quando a fila estiver cheia, não se pode adicionar mais elementos nela.
*/

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
    int n; 
    //o usuário entrará com um tamanho qualquer do vetor  
    scanf("%d", &n);
    //retorno o valor de n que será recebido como o tamanho dentro do método.
    fila f(n);
    //preenchendo  o vetor
    for(i = 0; i < n; i++){
        f.enfileirar(i);
    }
    for(i = 0; i < n/2; i++){
        printf(" %d , ", f.desenfileirar());
    }
    printf("\n");

    for(i = 0; i < n/2; i++){
        f.enfileirar(i);
    }
    
    while(!f.vazia()){
        printf(" %d , ", f.desenfileirar());
    }


    return 0;
}
