/*
Crie um vetor com 10 posições preenchidas com os números de 10 a 100 (de 10 em 10) e exiba os elementos na ordem inversa.
*/

#include <stdio.h>

int main(){
    int valores[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    
    for(int i = 9; i >= 0; i--){
        printf("%i ", valores[i]);
    }
    
    return 0;
}