#include <stdio.h>

int main() {
	int roboticMovement[3][3][3] = {
	{
		{-7, 2, -9},
		{-9, 0, 2},
		{2, 3, 5}
	},
	{
		{3, 6, 3},
		{-1, 7, 8},
		{-9, -8, 2}
	},
	{
		{-3, -6, 9},
		{6, 7, 0},
		{4, 2, 0}
	}
	};
	
	printf("Robotic Movement Matrix: \n\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				printf("%d", roboticMovement[i][j][k]);
				printf("\t");
			}
			printf("\n");
		}
		printf("\n");
	}
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				if (roboticMovement[i][j][k] < 0) {
					roboticMovement[i][j][k] = roboticMovement[i][j][k] * -1;
				}
			}
		}
	}
	
	printf("Normalized Movement Matrix: \n\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				printf("%d", roboticMovement[i][j][k]);
				printf("\t");
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}
