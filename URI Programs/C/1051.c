#include <stdio.h>

int main(){
	float value, taxes = 0;
	scanf("%f", &value);
	if (value <= 2000){
		printf("Isento\n");
	}
	if (value > 4500){
		taxes = (value - 4500) * 0.28;
		value = 4500;
	}
	if (value > 3000){
		taxes = (value - 3000) * 0.18 + taxes;
		value = 3000;
	}
	if (value > 2000){
		taxes = (value - 2000) * 0.08 + taxes;
		printf("R$ %.2f\n", taxes);
	}
	return 0;
}