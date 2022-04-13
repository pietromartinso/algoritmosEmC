#include <stdio.h>
int main(){
	int v[5];
	int i;

	for(i=0;i<5;i++){
		printf("Insira um dado:\n");
		scanf("%d", &v[i]);
	}
	
	printf("Dados inseridos:\n");
	for(i=0;i<5;i++){
		printf("%d ", v[i]);
	}
}

