#include <stdio.h>
#include <string.h>

int main () {
    
char contato[20] [200];
int numero [20] [200];
int numero1;
int i;
int k = 0;
int j;


printf("DIGITE 1 PARA ADICIONAR ALGUM CONTATO E 2 PARA EXIBI-LOS\n");    


do {
     
        if (numero1 = 1) {
            
            for (i = 0; i < 1; i++) {
            printf("informe o nome do contato");
            scanf("%s", &contato[i]);

           for (i = 0; i <1;i++) {
           printf("informe o número do contato");
           scanf("%d", &numero[i][j]);
            }
            
         }
          k++;  
        }  
         printf("Deseja adicionar mais algum contato?");
        scanf("%d",&numero1);   
       

        fflush(stdin);
     }while (numero1 != 2);


for ( i = 0; i < k; i++)
  {
  printf("Contato %s \n ",contato[i]); 


  for ( j = 0; j < k; j++)
    {
  printf("\n");  
  printf(" Numero %d \n ",numero[i][j]);
  printf("\n");
    }  
  
  }
return 0;
}
