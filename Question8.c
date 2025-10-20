#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int floors = 3, rooms = 4, beds = 2;
    int building[3][4][2];
    int emptyBeds = 0;

    srand(time(0));

    for (int f = 0; f < floors; f++) {
        for (int r = 0; r < rooms; r++) {
            for (int b = 0; b < beds; b++) {
                building[f][r][b] = rand() % 2;
            }
        }
    }

    printf("Building bed status (0 = empty, 1 = occupied):\n\n");

    for (int i = 0; i < floors; i++) {
        printf("Floor %d:\n", i + 1);
        for (int j = 0; j < rooms; j++) {
            printf(" Room %d: ", j + 1);
            for (int k = 0; k < beds; k++) {
                printf("%d ", building[i][j][k]);
                if (building[i][j][k] == 0) {
                    emptyBeds++;
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("Total empty beds: %d\n", emptyBeds);

    return 0;
}
