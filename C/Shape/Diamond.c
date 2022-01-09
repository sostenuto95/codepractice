#include <stdio.h>

int main()
{   
    int i,j,rows;
    int k=1;
    
    printf("How many rows do you like? ");
    scanf("%d",&rows);
    printf("Gotcha, %d rows incoming..\n", rows);
    
    
    for(i=1;i<rows;i++)
    {   
        for(j=rows;j>=i;j--){
            printf("  ");
        }
        for(j=1;j<i;j++){
            printf("* ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }

     
      printf("\n");
    }
    
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("  ");
        }
        for(j=i;j<rows;j++){
            printf("* ");
        }
        for(j=rows;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
        
    
   

    return 0;
}
