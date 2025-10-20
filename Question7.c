#include <stdio.h>

int main() {
    int alphabets[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int size = sizeof(alphabets)/sizeof(alphabets[0]);

    for (int i = 0; i < size; i++) {
        for (int j = i/2; j < size - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%c", alphabets[j]);
        }
        printf("\n");
    }
    return 0;
}
