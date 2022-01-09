
#include <stdio.h>
// Butterfly
int main()
{
    int i,j,rows;
        printf("How big do You want your Butterfly ?\n");
        scanf("%d", &rows);
        printf("Cool ,here is your %d Rows Butterfly: \n",rows);
        
        
        for(i=1;i<rows;i++){ 
           for(j=1;j<=i;j++){   //Upper L Triangle
               printf("* ");
           }
           for(j=i;j<rows;j++){ //Void for Left Upper
               printf("  ");
           }
           
           
            for(j=i;j<rows;j++){  // Viod for Right Upper // <rows = -1
               printf("  ");
           }
           for(j=1;j<=i;j++){  // Upper R Triangle
               printf("* ");
           }           
           
           
     
            printf("\n");
       
        }
        
        
        
        
        for(i=1;i<=rows;i++){  //Bot L Triangle

           for(j=i;j<=rows;j++){
               printf("* ");
           }
           
 
           for(j=1;j<i;j++){ // Bot Viod Left // <rows = -1
               printf("  ");
           }
           
           for(j=1;j<i;j++){ // Bot Viod Right
               printf("  ");
           }
           

           for(j=rows;j>=i;j--){ //Bot R Triangle
               printf("* ");
           } 
           
     
            printf("\n");
        
       
        }
        
        
        
        
        
        
        
        
        
        
        
        printf("There you have it !\n");
    
        return 0;
}
