/* 
1. Verificar número
Crie uma função verificarNumero() que receba um número inteiro e informe:
- Positivo → maior que 0
- Negativo → menor que 0
- Zero → igual a 0
*/

#include <stdio.h>

void verificarNumero(float x){
    if (x > 0) {
        printf("O número %.2f é maior que 0", x);
    } else if (x < 0){
        printf("O número %.2f é menor que 0", x);
    } else {
        printf("O número %.2f igual a 0", x);
    }
}

int main()
{
    float num = 0;
    printf("---Verificador de Números---\n");
    printf("Digite um número: ");
    
    if (scanf("%f", &num) != 1) {
        printf("\nDIGITE UM NÚMERO VÁLIDO!\n");
        return 1; 
    }
  
    verificarNumero(num);
    return 0;
}
