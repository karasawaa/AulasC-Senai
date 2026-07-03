#include <stdio.h>

int main()
{
    int valores[5] = {0, 1, 2, 3, 4};
    int auxiliar = 0;
    
    for(int i = 0; i < 5; i++){
        if(valores[i] > auxiliar) {}
        auxiliar = valores[i];
    }
    
    printf("%i", auxiliar);

    return 0;
}