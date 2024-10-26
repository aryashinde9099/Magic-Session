#include<stdio.h>
void main(){
    int row;
    printf("Enter number of row:\n");
    scanf("%d",&row);

    char ch='E';
    for(int i=1;i<=row;i++){

        for(int j = 0 ; j <= row - i ; j++){
            printf("%c ",ch - j);

        }
        
        printf("\n");
    }

}

