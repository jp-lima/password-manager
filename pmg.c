#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define tamanho_lista 91

char lista_caracteres[tamanho_lista] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()-_=+[]{}|;:,.<>/?`~";

int create(){
	printf("ola");
	int n;
	char senha[11] = "";

		
	for(n = 0; n < 10; n++){
		
	int numeroAleatorio = rand() % 91;
	
	senha[n] = lista_caracteres[numeroAleatorio];

	}

	senha[n] = '\0';


	printf("Senha: %s\n", senha);
	
	


return 0;
}



int main(int argc, char *argv[]){

	int i;

	if(argc > 1){
		if(strcmp(argv[1], "create") == 0){
			srand(time(NULL));

			create();
		}
	} 
	else{
		printf("Nao foi inserido coisa alem \n");
	}

	return 0;

}
