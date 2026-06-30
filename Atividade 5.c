/* 
5. Maior entre três números
Crie uma função maiorNumero() que receba 3 números inteiros e exiba
o maior.
*/

#include <stdio.h>

void maiorNumero(float x, float y, float z){
    if (x > y && x > z) {
        printf("O maior número é %.2f", x);
    } else if (y > x && y > z) {
        printf("O maior número é %.2f", y);
    } else if (z > x && z > y) {
        printf("O maior número é %.2f", z);
    }
}

int main()
{
    float n1 = 0, n2 = 0, n3 = 0;
    printf("---Verificador de Maior Número---\n");
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    printf("Digite o terceiro número: ");
    scanf("%f", &n3);
    
    maiorNumero(n1, n2, n3);
    return 0;
}
