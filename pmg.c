#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int create(){
	printf("ola");

	int numeroAleatorio = rand();

	printf("Numero aleatorio %d\n", numeroAleatorio);

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
