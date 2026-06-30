/* 
4. Conceito do aluno
Crie uma função conceitoAluno().
Regras:
- Nota ≥ 9 → Conceito A
- Nota ≥ 7 → Conceito B
- Nota ≥ 5 → Conceito C
- Nota < 5 → Conceito D
*/

#include <stdio.h>

void conceitoAluno(float x){
    if (x >= 9) {
        printf("Conceito A");
    } else if (x >= 7){
        printf("Conceito B");
    } else if (x >= 5){
        printf("Conceito C");
    } else {
        printf("Conceito D");
    } 
}

int main()
{
    float nota = 0;
    printf("---Verificador de Notas---\n");
    printf("Digite a nota do Aluno: ");
    
    if (scanf("%f", &nota) != 1) {
        printf("\nDIGITE UMA NOTA VÁLIDA!\n");
        return 1; 
    }
  
    conceitoAluno(nota);
    return 0;
}
