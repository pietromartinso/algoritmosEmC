#include <stdio.h>
int main(){
	
	int v[5] = {10, 20, 30, 40, 50};
	int i;
	float s = 0;
	
	for(i=0;i<5;i++){
		s += v[i];
	}
	
	printf("Resultado: %f\n", s/5);
}

