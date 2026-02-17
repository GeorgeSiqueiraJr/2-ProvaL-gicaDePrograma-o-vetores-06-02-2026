/*ENUNCIADO:
Question 2- Desenvolva um programa na liguagem C que leia um vetor de N números inteiros, onde N é informado pelo
usuário. O programa deve calcular e exibir:
a) Média aritmética dos valores;
b) Quantidade de elementos acima da média;
c) Quantidade de elementos abaixo da média;
d) Quantidade de valores exatamente iguais à média; */
#include <stdio.h>

int main(){
    int n;

    printf("Informe o tamanho do vetor: \n");
    scanf("%d", &n);
    int v[n];
    
    for (int i = 0; i < n; i++) {
        printf("Informe os números do vetor: ");
        scanf("%d", &v[i]);
    }

    printf("\nNúmeros do vetor: \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", v[i]);
    }
    

    int soma=0;
    float media=0;
    
    for (int i = 0; i < n ;i++)
    {
        soma += v[i];
    }
    
    media = soma / n;

    printf("\nSoma: %d", soma);
    
    printf("\nMédia Aritmética: %.1f", media);
    
    int acima=0;

    for (int i = 0; i < n; i++){
        if( v[i] > media){
            acima++;
        }
    }

    printf("\nQuantidade de elementos acima da média: %d", acima);

    int abaixo=0;

    for (int i = 0; i < n; i++){
        if( v[i] < media){
            abaixo++;
        }
    }

    printf("\nQuantidade de elementos abaixo da média: %d", abaixo);

    int igual=0;

    for (int i = 0; i < n; i++){
        if( v[i] == media){
            igual++;
        }
    }

    printf("\nQuantidade de elementos igual da média: %d", igual);
    
    
}