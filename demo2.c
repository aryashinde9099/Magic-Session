#include <stdio.h>
void main(){
    int iarr[4];
    int sum=0;

    printf("enter array elemnents:\n");
    for(int i=0;i<4;i++){
        scanf("%d",&iarr[i]);
    }
    printf("array elements are:\n");
    for(int j=0;j<4;j++){
        
        printf("%d\n",iarr[j]);
        sum=sum+iarr[j];
    }

    printf("sum of elements is:%d\n",sum);
    

}