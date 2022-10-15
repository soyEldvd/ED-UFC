#include <cstdio>

class posicao{
    public:
        int l;
        int c;
};

class FilaPosicao {
    public:
        posicao* v;   //varivel necessaria para a alocacao dinamica
        int tamax;
        int ini;
        int fim;
        int count;

        //metodo construtor para inicializar a fila
        FilaPosicao(int tamanho){
            v = new posicao[tamanho];
            tamax = tamanho;
            ini = -1;
            fim = -1;
            count = 0;
        }

        //metodo para enfileirar as posições
        void enfileirar(posicao p){
            if(count < tamax){
                fim = (fim + 1) % tamax;
                count++;
                v[fim] = p; //como estamos buscando a posição, o valor da posição que será inserida será a posição da classe
            }
        }

        posicao desenfileirar(){
            if(count != 0){
                ini = (ini + 1) % tamax;
                count--;
                return v[ini];
            }
        }

        //metodo para a fila vazia
        int vazia(){
            return count == 0;
        }
};  


int main(){
    FilaPosicao f(10); //criei uma fila de tamanho 10

    posicao p;

    for(int i = 0; i < 10; i++){
        p.l = i*i;
        p.c = i*i*i;
        f.enfileirar(p);
    }

    for(int i = 0; i < 5; i++){
        p = f.desenfileirar();
        printf("linha %d, coluna %d\n", p.l, p.c);
    }
    printf("\n");

    for(int i = 0; i < 5; i++){
        p.l = i * i;
        p.c = i * i * i;
        f.enfileirar(p);
    }

    while (!f.vazia()){
        p = f.desenfileirar();
        printf("linha %d, coluna %d\n", p.l, p.c);
    }
}