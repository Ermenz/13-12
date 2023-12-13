#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>


float  multiplicacao (int numero[]) {
	
int i;
float resultado = numero[0];

	
	for (i = 1; i < 2; i++) {
  resultado-= numero[i]; 
	
     }
      

  

      
      
	printf("O resultado da multiplicação é %.2f", resultado);
	
	return resultado;
}



int main () {

int i;
int j = 0;
int numero[2];
	
	setlocale(LC_ALL, "portuguese");
	
for (i = 0; i < 2; i ++)	{
	j++;
printf("Informe o %dº número", j);
scanf("%d", &numero[i]);

}

multiplicacao(numero);

	
	return 0;
}
