#include <stdio.h>

float maior(float num1, float num2){
	if(num1 > num2)
		return num1;
	else
		return num2;
}

int main(){
	float x, y, m;
	printf("Insira um valor:\n");
	scanf("%f", &x);
	printf("Insira mais um valor:\n");
	scanf("%f", &y);
	m = maior(x,y);
	printf("Maior: %.2f\n", m);
}


