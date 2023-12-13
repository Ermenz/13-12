#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main () {
	
	setlocale(LC_ALL, "portuguese");

char loginsalvo[250] = "erick";
char senhasalvo[250] = "123";
char senha[250];  
char login[250];


do{

printf("Informe login");
gets("login");

printf("Informe senha");
gets(senha);

 if (strcmp(login, loginsalvo) == 0  && ( senha,senhasalvo)== 0){
   printf("Bem vindo!");
 }
 else {
 	printf("Senha incorreta");
 }

}while (strcmp(login, loginsalvo) != 0  || ( senha,senhasalvo)!= 0);
	
	
	
	
	return 0;
}
