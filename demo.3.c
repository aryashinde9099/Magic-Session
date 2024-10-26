#include <stdio.h>
void main(){
    int size;

    int iarr[size];
    printf("enter size:\n");
    scanf("%d\n",&size);

    printf("array elements are:\n");
    for(int i=0;i<4;i++){
        printf("%d\n",&iarr[i]);
    }

    int search;
    printf("enter search elemnet:\n");
    for(int j=0;j<4;j++){
        scanf("%d\n",iarr[j]);
        if(search==iarr[j]){
            printf("element found");
        }
        else{
            printf("element is not found");
        }

    }

}

