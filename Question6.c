#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int isIdentityMatrix = 1;

    // int matrix[4][4] = {
    //     {1, 0, 0, 0},
    //     {0, 1, 0, 0},
    //     {0, 0, 1, 0},
    //     {0, 0, 0, 1}
    // };

    int matrix[4][4];

    srand(time(0));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrix[i][j] = rand() % 2;
        }
    }

    printf("Class seating:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j) {
                if (matrix[i][j] != 1) {
                    isIdentityMatrix = 0;
                }
            } else {
                if (matrix[i][j] == 1) {
                    isIdentityMatrix = 0;
                }
            }
        }
    }

    if (isIdentityMatrix) {
        printf("The students are seated correctly\n");
    } else {
        printf("The students are not seated correctly\n");
    }

    return 0;
}
