#include <stdio.h>

int main(){
	
	char s[10];
	
	printf("Digite algo (scanf convencional):\n");
	scanf("%s", s);
	fflush(stdin);
	
	printf("Resultado: %s\n\n", s);
	
	printf("Digite algo (scanf convencional):\n");
	scanf("%10[^\n]s", s);
	fflush(stdin);
	
	printf("Resultado: %s\n\n", s);
	
}
