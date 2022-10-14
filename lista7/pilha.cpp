#include <cstdio>

class pilha{
    public:
    
        int* v; //necessario para fazer a alocaçao dinamica
        int tamax; //vai ser o tamanho máximo da lista
        int topo; //o elemento que foi inserido por ultimo
        int count; //quantos elementos tem na pilha
        
        //alocaçao dinamica do vetor da pilha
        pilha (int tamanho){
            v = new int[tamanho]; //o mesmo que v[tamanho]
            tamax = tamanho; //o tamanho máximo será o desejado
            topo = -1; 
            count = 0;
        }
        
        //metodo empilhar
        void empilhar (int x){
            if(topo + 1 < tamax){
                v[topo + 1] = x;
                count++;
                topo++;
            }
            else{
                printf("vetor ta cheio\n");
            }
        }
        
        //metodo desempilhar
        int desempilhar(){
            int aux = v[topo];
            
            if(count != 0){
                topo--;
                count --;
                return aux;
            }
        }
        
        void vazia(){
            if(topo == -1 && count == 0){
                printf("ta vazia\n");                
            }
        }
    
};

int main(){
    int tamanho = 10;
    int i;
    pilha a(tamanho);
    
    
    for(i = 0; i < tamanho; i++){
        a.empilhar(i);
    }
    
    return 0;
}