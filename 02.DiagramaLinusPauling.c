#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 19


int main(int argc, char *argv[]) {
	char nivel[7] = {'K', 'L', 'M', 'N', 'O', 'P', 'Q'};
	int subnivel_numero[TAM] = {1, 2, 2, 3, 3, 4, 3, 4, 5, 4, 5, 6, 4, 5, 6, 7, 5, 6, 7};
	char subnivel[TAM] = {'s', 's', 'p', 's', 'p', 's', 'd', 'p', 's', 'd', 'p', 's', 'f', 'd', 'p', 's', 'f', 'd', 'p'};
	int numero_atomico, i, numero_eletrons, soma, maior_valor = 0;
 
 	setlocale(LC_ALL, "Portuguese");
 	
	printf("Digite o número atômico: \n");
	scanf("%d", &numero_atomico);
	
	i = 0;
	printf("Distribuição eletrônica: \n");
	while(soma <= numero_atomico){
		if(subnivel[i] == 's'){
			numero_eletrons = 2;
		}
		if(subnivel[i] == 'p'){
			numero_eletrons = 6;
		}
		if(subnivel[i] == 'd'){
			numero_eletrons = 10;
		}
		if(subnivel[i] == 'f'){
			numero_eletrons = 14;
		}
		
		soma = soma + numero_eletrons;
		
		printf("%d", subnivel_numero[i]);
		printf("%c", subnivel[i]);
		if(soma <= numero_atomico){
			printf("%d ", numero_eletrons);
		}else{
			numero_eletrons = numero_atomico - (soma - numero_eletrons);
			printf("%d ", numero_eletrons);
		}	
		
		if (subnivel_numero[i] > maior_valor){
			maior_valor = subnivel_numero[i];
		}
		
		if(soma == numero_atomico){
			break;
		}
		
		i++;
	}
	
	printf("\n");
	printf("Camadas eletrônicas: ");
	for(i= 0; i < maior_valor; i++){
		printf(" %c", nivel[i]);
	}
	
	return 0;
}
