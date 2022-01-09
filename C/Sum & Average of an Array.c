#include <stdio.h>
#include <math.h>
//#define N 10

int main()
{   
int x[100];
int i, n;
int sum=0;
    printf("Please pick array size number\n");
    scanf("%d",&n);
    
    do{
    printf("Please pick form 1-100\n");
    scanf("%d",&n);
        }
    while(n<=0 || n>100);
    printf("Please pick %d numbers\n", n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&x[i]);
    }
    
    printf("We are sorting.....\n");
    
    for(i=0;i<n;i++)
    {
      sum = sum+x[i];
    }
    
    printf("The Sum is : %d\n", sum);
    int average = sum/n;
    printf("The Average is : %d", average);
    

    return 0;

}