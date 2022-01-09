#include <stdio.h>
// Left Pascal's Triangle  z
int main()
{
    int i,j,rows;
        printf("How big do You want your Left Pascal's Triangle ?\n");
        scanf("%d", &rows);
        printf("Cool ,here is your %d Rows Left Pascal's Triangle: \n",rows);
        
       for(i=1;i<rows;i++){
           for(j=1;j<=i;j++){
               printf("* ");
           }
           
     
            printf("\n");
        
       
        }
        for(i=1;i<=rows;i++){

           for(j=i;j<=rows;j++){
               printf("* ");
           }
           
     
            printf("\n");
        
       
        }
        
        
        
        
        
        
        
        
        
        printf("There you have it !\n");
    
        return 0;
}