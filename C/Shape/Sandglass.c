
#include <stdio.h>
// Sandglass
int main()
{
    int i,j,rows;
        printf("How big do You want your Sandglass ?\n");
        scanf("%d", &rows);
        printf("Cool ,here is your %d Rows Sandglass: \n",rows);
        
       for(i=1;i<rows;i++){  // Upper Sandglass  Print Less Row
            for(j=1;j<=i;j++){
            printf(" ");
        }
        
        for(j=i;j<=rows;j++){
            printf("* ");
        }
           
            printf("\n");
        }
        
      
        
      for(i=1;i<=rows;i++){  // Bottom Sandglass
            for(j=i;j<=rows;j++){
                printf(" ");
            }
        
        
             for(j=1;j<=i;j++){
            printf("* ");
        }

            printf("\n");
        
       
        }
        
        
        
        
        
        
        
        
        
        printf("There you have it !\n");
    
        return 0;
}
