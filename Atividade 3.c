/*
3. Calculadora simples
Crie uma função calcular() que receba:
- Número 1
- Número 2
- Operação (+, -, *, /)
Mostre o resultado.
Desafio: tratar divisão por zero.
*/

#include <stdio.h>

float soma(float x, float y){
    return x + y;
}

float subtracao(float x, float y){
    return x - y;
}

float multiplicacao(float x, float y){
    return x * y;
}

float divisao(float x, float y){
        return x / y;
}
int main()
{
    float n1 = 0, n2 = 0;
    int opcao = 0;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    printf(" 1- Soma\n 2- Subtração \n 3- Multiplicacção \n 4- Divisão \nEscolha uma opção: ");
    scanf("%i", &opcao);
    
    switch(opcao){
        case 1:
            printf("A soma dos 2 números é : %.2f", soma(n1, n2));
            break;
        case 2:
            printf("A subtração dos 2 números é : %.2f", subtracao(n1, n2));
            break;

        case 3: 
            printf("A multiplição dos 2 números é : %.2f", multiplicacao(n1, n2));
            break;

        case 4:
            if (n2 == 0) {
                printf("Não é possível dividir por ZERO");
                break;
            } else {
                printf("A divisão dos 2 números é : %.2f", divisao(n1, n2));
                break;
            }
        default:
            printf("A opção selecionada não esxiste!");
    } 

    return 0;
}
