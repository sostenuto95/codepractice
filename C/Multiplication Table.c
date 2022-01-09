#include <stdio.h>  // standard I/O
#include <conio.h> // console I/O

int main (void)
{
    //Loop 
    int a = 0;
    int b = 0;

    while(a<10)
    {
        b = 0;
        while (b<10)
        {
            printf(" %dx%d=%-2d,", a, b, a*b);
            b = b+1;
        }

        printf("\n");
        a = a+1;
    }

    printf("\n== Program Ended ==\n Please Press anykey to EXIT");
}