/*
Leia 10 números inteiros e armazene-os em um vetor. Ao final, exiba todos os números.
*/

#include <stdio.h>

int main()
{
    int valores[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int aux = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%i", &aux);
        valores[i] = aux;
    }
    
    for(int i = 0; i < 10; i++){
        printf("%i ", valores[i]);
    }
    
    return 0;
}