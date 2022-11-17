/*
        DEQUE (Double End QUEue)
    O deque nada mais é do que uma estrutura de dados as quais as
inclusões OU exclusões podem ser feitas nas extremidades (inicio e fim)
    A sua implementação funciona de maneira duplamente encadeada, onde os elementos
possuem o endereço do antecessor e do seu sucessor. 
    Além de possuir um nó cabeça (ou head) para gerenciar a estrutura.

    as principais funções do deque são:
    Inicialização
    Retornar a quantidade de elementos válidos
    Printar os elementos
    Inserir
    Excluir
    Reiniciar a estrutura 
*/


#include <cstdio>

class deque{
    public:
        struct node{ /*o noh que possue um inteiro que será o valor armazenado,
                      e um ponteiro para a posição proxima e a sucessora.*/
            int elem;
            node* ant = nullptr;
            node* prox = nullptr;
        };

        node* esq, *dir; //variaveis para apontar pra as posições direita e esquerda

        //metodos principais:
        void inserirEsq(int e){
            node* n = new node;//crio um novo nó chamado n
            if(esq == nullptr){//se o nó estiver vazio
                esq = dir = n;//a esquerda eh igual a direita que é igual ao n
            }else{//senão
                esq->ant = n; //o anterior do nó esquerdo vai apontar o n
                n->prox = esq;//o proximo valor de n aponta pro nó esquerdo
            }
            n->elem = e; //o elemento desse no n recebe e
        }
        void inserirDir(int e){
            node* n = new node; //crio um novo nó chamado n
            if(dir == nullptr){ //se o nó estiver vazio
                dir = esq = n; //direita eh igual a tudo blablbalalb
            }else{
                dir->prox = n; //o proximo da direita vai apontar pro n
                n->ant = dir; //e o anterior do n vai apontar pro direita
            }
            n->elem = e;//o elemento desse nó n recebe e
        }
        void removerEsq(){ //vamos remover pela esquerda 
            if(esq != nullptr){ //se o deque não estiver vazio...
                if(esq->prox == nullptr){ //e se o deque possuir apenas um nó
                    esq = dir = nullptr; //exclui tudo
                }else{//senão...
                    esq = esq->prox; //o nó esquerda vai apontar pra ele mesmo
                    delete esq->ant; //deleto o esquerdo
                }else{printf("\no deque está vazio\n");}//até o deque estiver vazio
            }
        }
        void removerDir(){//vamos remover pela direita agora
            if(dir != nullptr){ //se o deque não esitiver vazio...
                if(dir->ant == nullptr){//e se o deque possuir só um nó
                    dir = esq = nullptr;//remove logo tudo
                }else{//senão
                    dir = dir->ant;//o direita vai apontar para ele msm
                    delete dir->ant; //e depois deleta
                }else{printf("\no deque está vazio\n");}//até o deque tá vazio
            }
        }
        int mostraDir(){
            if(dir != nullptr){//se o valor da direita não estiver vazio...
                printf("\no valor mais a direita eh: %d\n", dir->elem);
            }
        }

        int mostraEsq(){
            if(esq != nullptr){//se o valor da esquerda não estiver vazio...
                printf("\no valor mais a esquerda eh: %d\n", esq->elem);
            }
        }


        int dequevazio(){//se a esquerda e a direita estiverem vazias...
            if(esq == nullptr){
                return 1;//retorna verdadeiro para o dequevazio
            }else{return 0;}//retorna falso se não.
        }

};
 
int main (){
    int e, aux = 1, boleano;
    deque principal;
    deque auxiliar;
    while(aux != 0){
        printf(
            "\nDigite 1 para inserir a esquerda 
            \nDigite 2 para inserir a direita  
            \n\nDigite 3 se quiser remover o elemento da esquerda
            \nDigite 4 se quiser remover o elemento da direita
            \n\nDigite 5 se quiser consultar o elemento mais a esquerda
            \nDigite 6 se quiser consultar o elemento mais a direita
            \n\nDigite 7 se quiser conferir se o deque está vazio
            \n\nDigite 8 se quiser ver o deque inteiro"
        );
        scanf("%d", &aux);

        if(aux == 1 || aux == 2){
            printf("\nDigite o valor a ser inserido: ");
            scanf("%d", &e);

            switch (aux){
                case 1:
                    principal.inserirEsq(e);
                break;
                case 2:
                    principal.inserirDir(e);
                break;
                case 3:
                    principal.removerEsq();
                break;
                case 4:
                    principal.removerDir();
                break;
                case 5:
                    principal.mostraEsq();
                break;
                case 6:
                    principal.mostraDir();
                break;
                case 7:
                    boleano = principal.dequevazio();
                        if(boleano == 1){
                            printf("\n\n o deque esta vazio");
                        }else{printf("\n\no deque nao esta vazio");}
                break;
                case 8:
                    auxiliar = principal; 
                    principal.deque(auxiliar.esq);
                    printf("\nit's over!");
                break;
            }
    
        }
    }
    return 0;
}