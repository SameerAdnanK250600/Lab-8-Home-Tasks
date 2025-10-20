#include <stdio.h>

int main() {
	int studentMarks[][4] = {{23,54,76,34}, {12,65,43,87}, {84,36,45,04}, {45,92,45,27}};
	int newMatrix[][4] = {{0}, {0}, {0}, {0}};
	
	printf("Original Student Marks Matrix: \n");
	printf("\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d", studentMarks[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("\n");
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			newMatrix[i][j] = studentMarks[j][i];
		}
	}
	
	printf("New Student Marks Matrix: \n");
	printf("\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d", newMatrix[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
