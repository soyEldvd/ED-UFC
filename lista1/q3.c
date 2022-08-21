#include <stdio.h>
#include <stdlib.h>

void vetaux();
int main (){
    int m;
    int i = 0;

    printf("digite o tamanho do vetor: ");
    scanf("%d", &m);

    int l[m];

    for (i = 0; i < m; i++){
        printf("digite o %d do vetor: ", i + 1);
        scanf("%d", &l[i]);
    }

    vetaux(l, m);

    return 0;
}

void vetaux(int l[], int m){
    int pontaux = m/2; 
    int vetaux[m/2]; 
    int contador = 0;
	
	
	int i = 0;
	while (i < m/2)
	{
		vetaux[i] = l[i];
		i++;
	}
	
	
	i = 1;
	while (i<m)
	{
		l[i] = l[pontaux];
		l[i-1] = vetaux[contador];
		
		contador++;
		pontaux++;
		i +=2;
	}
}