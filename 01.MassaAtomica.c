#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	int z, e, n = 0;
	
	setlocale (LC_ALL, "Portuguese");
	
	printf("Digite o número atômico: \n (Z) = ");
	scanf("%d", &z);
	printf("Digite o número de elétrons: \n (e) = ");
	scanf("%d", &e);
	printf("Digite o número de nêutrons: \n (n) = ");
	scanf("%d", &n);
	
	printf("\n");
	printf("A massa atômica é %d u",  z + n);
	printf("\n");
	
	if(z == e){
		printf("Número de prótons é igual ao número de elétrons - Átomo neutro");
	} else if ( z > e){
		printf("Íon carregado positivamente - Cátion");
	} else{
		printf("Íon carregado negativamente - Ânion");
	}
	
	return 0;
}
