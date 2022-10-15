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
            topo = -1; //o topo inicia no -1 pois assim nos certificaremos que não há nenhum elemento em sua frente, note que se ele começasse no 0, inseriríamos o primeiro item da pilha na segunda posição
            count = 0;//numero de elementos durante a iteração
        }
        
        //metodo empilhar
        void empilhar (int x){ 
            if(topo + 1 < tamax){ //se a posiçaõ topo for menor que o máximo o tamanho máximo da pilha, execute:
                v[topo + 1] = x; //o valor alocado na posição topo+1 do vetor será o de x
                count++; //existem agora count++ elementos na pilha
                topo++; //vamos colocar mais um elemento na pilha
            }
            else{ // se a posição topo for maior, a pilha tá cheia
                printf("vetor ta cheio\n");
            }
        }
        
        //metodo desempilhar
        int desempilhar(){
            int aux = v[topo]; //um aux receberá o valor da posição topo
            
            if(count != 0){ //se existir qualquer elemento na pilha: 
                topo--; //eu tiro ele
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
    pilha a(tamanho); //chamando o método na função principal
    
    
    for(i = 0; i < tamanho; i++){
        a.empilhar(i);//inserindo valores na pilha
    }
    
    return 0;
}