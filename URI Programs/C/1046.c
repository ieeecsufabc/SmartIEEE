#include <stdio.h>

int main(){
	int initial, final, duration;
	scanf("%d %d", &initial, &final);
	if (initial >= final){
		duration = 24 - initial + final;
	} else {
		duration = final - initial;
	}
	printf("O JOGO DUROU %d HORA(S)\n", duration);
	return 0;
}