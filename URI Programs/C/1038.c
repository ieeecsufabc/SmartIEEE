#include <stdio.h>

int main(){
	int x, y;
	float value;
	scanf("%d %d", &x, &y);
	switch(x){
		case 1:
			value = 4 * y;
			break;
		case 2:
			value = 4.5 * y;
			break;
		case 3:
			value = 5 * y;
			break;
		case 4:
			value = 2 * y;
			break;
		case 5:
			value = 1.5 * y;
			break;
	}
	printf("Total: R$ %.2f\n", value);
	return 0;
}