#include<stdio.h>
void main(){
    int i,start,end;
    printf("Enter start number:\n");
    scanf("%d",&start);

   
    printf("Enter end number:\n");
    scanf("%d",&end);


    printf("Composite numbers are:\n");

    for(i=start;i<=end;i++){
      int divisorcount=0;

        for(int j=1;j<=i;j++){
            
        if( (i % j ) == 0){
            divisorcount++;
        }

        }
        if(divisorcount>2){
            printf("%d\n",i);
        }
        }
    }
