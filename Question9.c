#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int cities = 3;
    int days = 5;
    int times = 3;

    float temperature[3][5][3];
    float maxTemp[3];

    srand(time(0));

    for (int i = 0; i < cities; i++) {
        for (int j = 0; j < days; j++) {
            for (int k = 0; k < times; k++) {
                temperature[i][j][k] = (rand() % 3001) / 100.0 + 15.0;
            }
        }
    }

    for (int i = 0; i < cities; i++) {
        maxTemp[i] = temperature[i][0][0];
        for (int j = 0; j < days; j++) {
            for (int k = 0; k < times; k++) {
                if (temperature[i][j][k] > maxTemp[i]) {
                    maxTemp[i] = temperature[i][j][k];
                }
            }
        }
    }

    for (int i = 0; i < cities; i++) {
        printf("City %d:\n", i + 1);
        for (int j = 0; j < days; j++) {
            printf(" Day %d -> ", j + 1);
            printf("Morning: %.2fC, Afternoon: %.2fC, Night: %.2fC\n", temperature[i][j][0], temperature[i][j][1], temperature[i][j][2]);
        }
        printf(" Highest temperature for City %d: %.2fC\n\n", i + 1, maxTemp[i]);
    }

    return 0;
}
