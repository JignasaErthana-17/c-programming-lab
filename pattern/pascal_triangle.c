#include <stdio.h>

int main() {
    int rows = 5;
    int coef;

    for(int i = 0; i < rows; i++) {

        for(int space = 1; space < rows - i; space++) {
            printf(" ");
        }

        coef = 1;

        for(int j = 0; j <= i; j++) {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
