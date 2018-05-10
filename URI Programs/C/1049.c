#include <stdio.h>
#include <string.h>

int main(){
	char first[20], second[20], third[20];
	scanf("%s", first);
	scanf("%s", second);
	scanf("%s", third);
	if (strcmp(first, "vertebrado") == 0){
		if (strcmp(second, "ave") == 0){
			if (strcmp(third, "carnivoro") == 0){
				printf("aguia\n");
			} else {
				printf("pomba\n");
			}
		} else {
			if (strcmp(third, "onivoro") == 0){
				printf("homem\n");
			} else {
				printf("vaca\n");
			}
		}
	} else {
		if (strcmp(second, "inseto") == 0){
			if (strcmp(third, "hematofago") == 0){
				printf("pulga\n");
			} else {
				printf("lagarta\n");
			}
		} else {
			if (strcmp(third, "hematofago") == 0){
				printf("sanguessuga\n");
			} else {
				printf("minhoca\n");
			}
		}
	}
	return 0;
}