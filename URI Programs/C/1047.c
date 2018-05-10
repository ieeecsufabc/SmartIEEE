#include <stdio.h>

int main(){
	int initialH, finalH, initialM, finalM, durationH, durationM;
	scanf("%d %d %d %d", &initialH, &initialM, &finalH, &finalM);
	if (finalH >= initialH){
		durationH = finalH - initialH;
	} else {
		durationH = 24 - initialH + finalH;
	}
	if (finalM >= initialM){
		durationM = finalM - initialM;
	} else {
		durationH--;
		durationM = 60 - initialM + finalM;
	}
	if ((initialH == finalH) && (initialM == finalM)){
		durationH = 24;
		durationM = 0;
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationH, durationM);
	return 0;
}