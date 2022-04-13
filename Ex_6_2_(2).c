#include <stdio.h>

int main(){
	char s[10];
	
	printf("Digite algo (leitura pelo gets):\n");
	gets(s);
	fflush(stdin);
	
	puts("Resultado:");
	puts(s);
	puts("");
	
	printf("Digite algo (leitura pelo fgets):\n");
	fgets(s, 10, stdin);
	fflush(stdin);
	
	puts("Resultado:");
	puts(s);
	
	
}
