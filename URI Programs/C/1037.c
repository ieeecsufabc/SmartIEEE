#include <stdio.h>

int main(){
	float number;
	scanf ("%f", &number);
	if (number < 0){
		printf("Fora de intervalo\n");
	}
	else if (number <= 25){
		printf("Intervalo [0,25]\n");
	}
	else if (number <= 50){
		printf("Intervalo (25,50]\n");
	}
	else if (number <=75){
		printf("Intervalo (50,75]\n");
	}
	else if (number <= 100){
		printf("Intervalo (75,100]\n");
	}
	else{
		printf("Fora de intervalo\n");
	}
	return 0;
}