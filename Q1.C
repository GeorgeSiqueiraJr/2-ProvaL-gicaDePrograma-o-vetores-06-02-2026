/*ENUNCIADO:
Question 1- Desenvolva um programa na liguagem C que leia um número inteiro, correspondente ao tamanho de um vetor
e, em seguida, crie um vetor com esse tamanho preenchendo-o com números inteiros aleatórios no intervalo de
0 a 100. Em seguida, cri um segunod vetor contendo os mesmos elementos do primeir, porém em ordem inversa.
Por fim, imprima o primeiro vetor e o segundo vetor. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int numero_aleatorio(int limite){
    return rand()%limite;
}

int main(){
    srand(time(NULL));
    int tam;
    printf("Informe o tamanho do vetor: \n");
    scanf("%d", &tam);

    int numero;

    int v[tam];
    for(int i=0; i<tam;i++){
        numero= numero_aleatorio(100);
        v[i] = numero;
    }
    
    printf("\nElemento do vetor: \n");
    for(int i=0; i<tam;i++){
        printf("%d ", v[i]);
    }

    int vetor2[tam];
    int k=0;
    
    for (int j= tam -1; j>= 0; j--){
            vetor2[k]= v[j];
            k++;
        }

    printf("\nElemento do vetor2: \n");
    for(int i=0; i<tam;i++){
        printf("%d ", vetor2[i]);
    }
    
    
}



