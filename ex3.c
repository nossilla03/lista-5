// Online C compiler to run C program online
#include <stdio.h>

int main() {
int i, status;
int concluidas = 0, pendentes = 0;


for(i = 1; i <= 8; i++) {
   scanf ("%d", &status);
   if (status == 1){
       printf("concluidas");
   
  } else 
  printf("pendente");
  
}
printf("concluida : %d", concluidas);

printf("pendetes : %d", pendentes);
    

    return 0;
}
