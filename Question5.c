#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int total = 0;
    int size = 16*16*16;
    int image[16][16];
    float averageColorIntensity;

    srand(time(0));

    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            image[i][j] = rand() % 256;
        }
    }

    printf("Average color intensity: \n");
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            total = total + image[i][j];
        }
    }

    averageColorIntensity = total / size;

    printf("%.2f\n", averageColorIntensity);

    return 0;
}
