/*
Crie um vetor com 10 posições preenchidas com os números de 1 a 10 e exiba apenas os números pares.
*/

#include <stdio.h>

int main(){
    int valores[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int aux = 0;
    
    for(int i = 0; i < 10; i++){
        if(valores[i] % 2 == 0 ){
            printf("%i ", valores[i]);
        }
    }
    
    return 0;
}