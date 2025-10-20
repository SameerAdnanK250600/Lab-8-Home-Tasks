#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int wards = 2;
    int patients = 3;
    int vitals = 3;

    int hospital[2][3][3];
    int rowSum[2][3] = {0};
    int colSum[2][3] = {0};

    srand(time(0));

    for (int i = 0; i < wards; i++) {
        for (int j = 0; j < patients; j++) {
            for (int k = 0; k < vitals; k++) {
                hospital[i][j][k] = 50 + rand() % 101;
            }
        }
    }

    for (int i = 0; i < wards; i++) {
        printf("Ward %d\n", i + 1);

        printf("Vital Readings:\n");
        for (int j = 0; j < patients; j++) {
            for (int k = 0; k < vitals; k++) {
                printf("%3d ", hospital[i][j][k]);
                rowSum[i][j] += hospital[i][j][k];
                colSum[i][k] += hospital[i][j][k];
            }
            printf("\n");
        }

        printf("\nTotal of all vital readings per patient:\n");
        for (int j = 0; j < patients; j++) {
            printf(" Patient %d -> %d\n", j + 1, rowSum[i][j]);
        }

        printf("\nTotal readings per vital sign across all patients:\n");
        for (int j = 0; j < vitals; j++) {
            printf(" Vital %d -> %d\n", j + 1, colSum[i][j]);
        }

        printf("\n");
    }

    return 0;
}
