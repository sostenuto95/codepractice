#include <stdio.h>  // standard I/O
#include <conio.h> // console I/O

int main (void)
{
    //Loop 
    int a = 0;
    int b = 0;
/*
    while(a<10)
    {
        b = 0;
        while (b<10)
        {
            int r = (a+b)%2;
            if (r==0){
                printf("~");
            }
            else {
                printf("^");
            
            }
            b = b+1;
        }

        printf("\n");
        a = a++;
    } */

    // for Loop
    for(int a = 0; a<10;a++){
        for(int b = 0; b<10; b++)
        {
            printf("~");
            }
        printf("\n");
        
    }

    printf("\n== Program Ended ==\n Please Press anykey to EXIT");
}