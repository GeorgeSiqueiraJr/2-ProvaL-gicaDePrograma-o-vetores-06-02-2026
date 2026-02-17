/*ENUNCIADO:
Question 3- Desenvolva um programa na liguagem C que leia um veotr de N inteiros e produza um segundo vetor P,
onde P[i] é a soma de todos os elementos do vetor original exceto v[i]. */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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

    int p[tam];

    for (int i = 0; i < tam; i++){
        p[i]= v[i];
    }
    
    int soma=0;
    int resultado=0;

    for (int i = 0; i < tam; i++)
    {
        soma += p[i];
               
    }

    printf("\nA soma é: %d ", soma);

    for (int j = 0; j < tam; j++)
        {
            resultado = soma - v[j];
            printf("\nA soma na posição [%d] é : %d ", j, resultado);
        }

    
    

}