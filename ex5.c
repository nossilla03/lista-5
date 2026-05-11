
#include <stdio.h>

int main() {
int codigo;

printf("Digite o codigo de acesso: ");
scanf ("%d", &codigo);

while (codigo != 4321){
    printf("codigo incorreto");
    
    printf("digite o codigo novamente:");
    scanf("%d", &codigo);
    
}     printf("acesso liberado");
    return 0;
}
