#include<stdio.h>
void main(){
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);

    int count=0;

    if(num<0){
        printf("num=-num");
    }

    while(num>0){
        num/=10;
        count++;
    }

    printf("Counf of given number:%d\n",count);
    
}