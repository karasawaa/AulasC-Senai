/* 
2. Classificação de idade
Crie uma função classificarIdade() que receba uma idade e informe:
- Criança → até 12 anos
- Adolescente → 13 a 17 anos
- Adulto → 18 a 59 anos
- Idoso → 60 anos ou mais
*/

#include <stdio.h>

void classificarIdade(int x){
    if (x < 0) {
        printf("Idade Inválida");
    } else if (x >= 0 && x <= 12){
        printf("É uma Criança");
    } else if (x >= 13 && x <= 17){
        printf("É um Adolescente");
    } else if (x >= 18 && x <= 59){
        printf("É um Adulto");
    } else if (x >= 60 && x < 200){
        printf("É um Idoso");
    } else {
        printf("IMPOSSÍVEL");
    }
}

int main()
{
    float idade = 0;
    printf("---Verificador de Idade---\n");
    printf("Digite uma idade: ");
    
    if (scanf("%f", &idade) != 1) {
        printf("\nDIGITE UMA IDADE VÁLIDA!\n");
        return 1; 
    }
  
    classificarIdade(idade);
    return 0;
}
