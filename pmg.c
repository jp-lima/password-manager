#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define tamanho_lista 91

char lista_caracteres[tamanho_lista] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()-_=+[]{}|;:,.<>/?`~";

int appendSenha(char password[11], char aplicativo[10]){
	FILE *arquivo = fopen("senhas.txt", "a");

	fprintf(arquivo, "===================\n");
	fprintf(arquivo, "senha: %s\n", password);
	fprintf(arquivo, "plataforma: %s\n", aplicativo);
	
	fclose(arquivo);

	return 0;
}

int readFile(){

	int qtd_senhas;
	char linha[100];
	char senha[100];

	FILE *arquivo = fopen("senhas.txt", "r");

		while(fgets(linha, 100,arquivo) != NULL){
			char primeira_letra = linha[0];
		
			if(primeira_letra == 's'){
				strcpy(senha, linha);
			puts(linha);
			}
			if(primeira_letra == 'p'){
				printf("=======");
				puts(senha);
				puts(linha);
				printf("=======");

			}
		}

	printf("quantidade senhas %d\n", qtd_senhas);

	return qtd_senhas;

}


int list(){
	FILE *arquivo = fopen("senhas.txt", "r");


	fclose(arquivo);
	
	return 0;
}

int create(){
	int n;
	char senha[11] = "";
	char plataforma[10];

	for(n = 0; n < 10; n++){	
	int numeroAleatorio = rand() % 91;
	senha[n] = lista_caracteres[numeroAleatorio];
	}
	senha[n] = '\0';
	printf("Senha: %s\n", senha);
	printf("Para qual plataforma é essa senha ?");
	fgets(plataforma,10,stdin);
	fflush(stdin);

	puts(plataforma);
	
	appendSenha(senha, plataforma);


return 0;
}



int main(int argc, char *argv[]){

	int i;

	if(argc > 1){
		if(strcmp(argv[1], "create") == 0){
			srand(time(NULL));

			create();
		}else if(strcmp(argv[1], "list") == 0){
			readFile();
		}
	} 
	else{
		printf("Nao foi inserido coisa alem \n");
	}

	return 0;

}
