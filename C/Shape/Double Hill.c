#include <stdio.h>
// Double Hill
int main()
{
    int i,j,rows;
        printf("How big do You want your Double Hill?\n");
        scanf("%d", &rows);
        printf("Cool ,here is your %d Rows Double Hill \n",rows);
        
        for(i=1;i<=rows;i++){    //First Hill
           for(j=rows;j>=i;j--){
               printf("  ");
           }
           for(j=1;j<i;j++){
               printf("* ");
           }
           for(j=1;j<=i;j++){
               printf("* ");
           }
           
           
           
           for(j=i+2;j<=rows;j++){ // Void Triangle aka reverse Hill
               printf("  ");
           }
           
           
           for(j=rows;j>i;j--){ // Second Hill
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
        
        printf("There you have it !\n");
    
        return 0;
}
