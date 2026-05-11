
#include <stdio.h>

int main() {
int prioridade, continuar;
int baixa = 0, media = 0, alta = 0;

printf("Qual a sua prioridade ?");
scanf("%d", &prioridade);

do while (prioridade == 1){
    baixa ++;
}  else if (prioridade == 2){
    media ++;
}   else if (prioridade == 3){
     baixa ++;
}     else {
      printf("prioridade invalida");
}

printf ("baixa :%d ", &baixa);

printf ("media :%d ", &media);

printf ("alta :%d ", &alta);
    return 0;
}
