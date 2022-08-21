#include <stdio.h>
#include <stdlib.h>

void changes();
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

    changes(l, m);

    return 0;
}

void changes(int l[], int m){
	int meio,ant ,pos ,aux, n;
	meio = m/2;
	ant = 1; 

	if (meio%2 == 0)
	 {
	   pos = meio;
	 }
	else
	 {
	   pos = meio + 1; 
	 }
	
	while(ant < meio && pos < m)
	{
	    
	    aux = l[ant];
	    l[ant] = l[pos];
	    l[pos] = aux;
	    ant +=2;
	    pos +=2;
	}

    for(n = 0; n < m; n++){
        printf("%d\n", l[n]);
    }
}