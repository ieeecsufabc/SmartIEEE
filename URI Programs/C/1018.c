#include <stdio.h>

int main(){
	int value, c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0, c1 = 0;
	scanf("%d", &value);
	printf("%d\n", value);
	while(value >= 100){
		value = value - 100;
		c100 = c100 + 1;
	}
	while(value >= 50){
		value = value - 50;
		c50 = c50 + 1;
	}
	while(value >= 20){
		value = value - 20;
		c20 = c20 + 1;
	}
	while(value >= 10){
		value = value - 10;
		c10 = c10 + 1;
	}
	while(value >= 5){
		value = value - 5;
		c5 = c5 + 1;
	}
	while(value >= 2){
		value = value - 2;
		c2 = c2 + 1;
	}
	while(value >= 1){
		value = value - 1;
		c1 = c1 + 1;
	}
	printf("%d nota(s) de R$ 100,00\n", c100);
	printf("%d nota(s) de R$ 50,00\n", c50);
	printf("%d nota(s) de R$ 20,00\n", c20);
	printf("%d nota(s) de R$ 10,00\n", c10);
	printf("%d nota(s) de R$ 5,00\n", c5);
	printf("%d nota(s) de R$ 2,00\n", c2);
	printf("%d nota(s) de R$ 1,00\n", c1);
	return 0;
}