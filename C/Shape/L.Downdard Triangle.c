#include <stdio.h>
// L.Downward Traiangle
int main()
{
    int i,j,rows;
        printf("How big do You want your Pyramid?\n");
        scanf("%d", &rows);
        printf("Cool ,here is your %d Rows Pyrmaid: \n",rows);
        
        for(i=1;i<=rows;i++){
           for(j=1;j<=i;j++){
               printf("  ");
           }
           for(j=i;j<=rows;j++){
               printf("* ");
           }
            printf("\n");
        }
        
        printf("There you have it !\n");
    
        return 0;
}