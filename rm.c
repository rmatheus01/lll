#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

char* verificarParOuImpar(int numero) {
	char resposta[200];
	if(numero % 2 == 0) {
		strcpy(resposta, "Par.");
	} else {
		strcpy(resposta, "Impar");
	}
	return resposta;
}

int main() {
	setlocale(LC_ALL, "");
	
	int numero;
	char resultado[200];
	
	printf("Digite um número: ");
	scanf("%i" , &numero);
	
	fflush(stdin);
	
	strcpy(resultado, verificarParOuImpar(numero));
	
	printf("Resultado: %s \n" , resultado);
	
	return 0;
	
}
