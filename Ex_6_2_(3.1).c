#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char origem[N] = {"Olá, mundo!"};
	char destino[N];
	
	printf("Antes do strcpy:\n");
	puts(origem);
	puts(destino);
	
	strcpy(destino,origem);
	
	printf("Depois do strcpy:\n");
	puts(origem);
	puts(destino);
}

