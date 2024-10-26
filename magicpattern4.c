#include<stdio.h>
void main(){
    int row;
    printf("Enter number of row:\n");
    scanf("%d",&row);

    char ch='D';
    for(int i=1;i<=row;i++){
        for(int sp=1;sp<=i;sp++){
         printf("  ");
         
      }
     
      for(int j=row-i;j>=0;j--){
         printf("%c ",ch);
         
      }
      ch--;
      printf("\n");
    }
}


    
    