#include <stdio.h>
#include <stdbool.h>
#include <string.h>



//------------------Tratamento dos dados---------
float media (float nota[]){

float somaNota = 0;
char ResultadoFinal[50]; 
int i;
float media;

for(i = 0; i < 2; i++){
	somaNota+= nota[i];	
}

i++;

media = somaNota / i;

printf("Sua média é: %.2f", media);

if (media >= 7){
       strcpy(ResultadoFinal, "Aprovado");
} else {
	 strcpy(ResultadoFinal, "Reprovado");
}
printf("A aluno está %s", ResultadoFinal);

return media;
}

//---------Recebimento de dados-----------
int main () {	
	int contadorNota;
	float nota[2];
	int i;
	
	for (i = 0; i < 2; i ++){
		contadorNota++;
		printf("Informe a %dº nota", contadorNota);
		scanf("%f", &nota[i]);
	}
	
	
	return 0; 
}
