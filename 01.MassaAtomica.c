#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	int z, e, n = 0;
	
	setlocale (LC_ALL, "Portuguese");
	
	printf("Digite o n�mero at�mico: \n (Z) = ");
	scanf("%d", &z);
	printf("Digite o n�mero de el�trons: \n (e) = ");
	scanf("%d", &e);
	printf("Digite o n�mero de n�utrons: \n (n) = ");
	scanf("%d", &n);
	
	printf("\n");
	printf("A massa at�mica � %d u",  z + n);
	printf("\n");
	
	if(z == e){
		printf("N�mero de pr�tons � igual ao n�mero de el�trons - �tomo neutro");
	} else if ( z > e){
		printf("�on carregado positivamente - C�tion");
	} else{
		printf("�on carregado negativamente - �nion");
	}
	
	return 0;
}
