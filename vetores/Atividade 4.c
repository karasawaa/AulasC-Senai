/*
Leia 7 números float e armazene-os em um vetor. Ao final, exiba a soma de todos eles formatados com apenas duas casas decimais
*/

#include <stdio.h>

int main(){
    float valores[7] = {0, 0, 0, 0, 0, 0, 0};
    float aux = 0;
    float result = 0;
    
    for(int i = 0; i < 7; i++){
        printf("Digite um número: ");
        scanf("%f", &aux);
        valores[i] = aux;
    }
    
    for(int i = 0; i < 7; i++){
        result = result + valores[i];
    }
    
    printf("\n%.2f ", result);
    
    return 0;
}