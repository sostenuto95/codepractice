
#include <stdio.h>

//#define N 10

int main()
{   
    int a[10];
    
    int h;
    
    int ok = 0;
    
    do {
    printf("How many Numbers you want to pick ?\n");
    scanf("%d", &h);

    
    if (h<0 || h>10){
         printf("Fuck you\n");
    }
    else if(h>0 && h<=10){
     ok = 1;
    }
    }
    
    while(!ok);
    
    
    
    printf("Plz Enter %d numbers:\n", h);
    for(int i=0; i<h;i++)
    {
    scanf("%d", &a[i]);
    }
    
    printf("The Sum of the choosen is : ");
    int sum =0 ;
    for(int i=0; i<h;i++){
        sum = sum +a[i];
        if (i>0){
            printf("+");
        }
        printf("%d", a[i]);
    }
    
    
    printf(" = %d\n ", sum);

    return 0;


}
