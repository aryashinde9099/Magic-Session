#include <stdio.h>

void main() {
    int row;
    printf("Enter the number of rows:\n");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= row; j++) {
            if (j == i) {
                printf(" * "); 
            } else {
                printf(" _ "); 
            }
        }
        printf("\n");
    }

   
}
