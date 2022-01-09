#include <stdio.h>
// Reverse Pyramid
int main()
{
    int i,j,rows;
        printf("How big do You want your Reverse Pyramid?\n");
        scanf("%d", &rows);
        printf("Cool,here is your %d Rows Reverse Pyramid \n",rows);
        
        for(i=1;i<=rows;i++){  
           for(j=1;j<=i;j++){
               printf(" ");
           }
           for(j=i;j<=rows;j++){
               printf("* ");
           }

          
            printf("\n");
        }
        
        printf("There you have it !\n");
    
        return 0;
}
