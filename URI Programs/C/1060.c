#include <stdio.h>

int main(){
	float value;
	int i, positive = 0;
	for (i = 0; i < 6; i++){
		scanf("%f", &value);
		if (value > 0){
			positive++;
		}
	}
	printf("%d valores positivos\n", positive);
	return 0;
}