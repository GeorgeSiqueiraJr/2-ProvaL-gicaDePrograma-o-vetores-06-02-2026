/*ENUNCIADO:
Question 2- Desenvolva um programa na liguagem C crie um vetor com 100 números inteiros aleatórios entre 0 a 100. 
Em seguida, o programa deve identificar o menor e o maior número contido no vetor e suas respesctivas posições. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero_aleatorio(int limite){
    return rand()%limite;
}

int main(){
    srand(time(NULL));
    int tam=100;

    int numero;

    int v[tam];
    for(int i=0; i<tam;i++){
        numero= numero_aleatorio(150);
        v[i] = numero;
    }
    
    printf("\nElementos do vetor: \n");
    for(int i=0; i<tam;i++){
        printf("%d ", v[i]);
    }

    int maior = 0;
    int indice =0; 
    for(int i=0; i<tam; i++){
        
        for (int j = 0; j < tam; j++)
        {
            if (v[j] > maior)
            {
                maior = v[j];
                indice = j;
            }
            
        }
    }
    printf("\nO maior número é %d e sua posição é: [%d] ", maior, indice+1);

    int menor = maior;
    int indice2 =0; 
    for(int i=0; i<tam; i++){
        for (int j = 0; j < tam; j++){
            if (v[j] < menor)
            {
                menor = v[j];
                indice2 = j;
            }
            
        }
    }
    printf("\nO menor número é %d e sua posição é: [%d] ", menor, indice2 );
}