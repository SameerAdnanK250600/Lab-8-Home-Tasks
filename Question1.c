#include <stdio.h>

int main() {
	int quarterOne[][3] = {{435,6436,6574}, {2143,56,8675}, {234,759,87}};
	int quarterTwo[][3] = {{43,675,134}, {423,675,2435}, {234,546,657}};
	int resultingMatrix[][3] = {{0}, {0}, {0}};
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			resultingMatrix[i][j] = quarterOne[i][j] + quarterTwo[i][j];
		}
	}
	
	printf("Matrix for Quarter 1: \n");
	printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d", quarterOne[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("\n");
	
	printf("Matrix for Quarter 2: \n");
	printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d", quarterTwo[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("\n");
	
	printf("Resulting Sum Matrix: \n");
	printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d", resultingMatrix[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
