
#include <stdio.h>
#include<stdlib.h>
//#define N 10

int main()
{   
int x[5];
int h=5;
    
    printf("Please pick 5 numbers\n");
    for(int i=0;i<h;i++){
    scanf("%d",&x[i]);
    }
    
    printf("We are sorting.....\n");

   int min = x[0];
   int max = x[0];
   
for(int i = 1; i <5;i++){
    if (x[i]<min){
       min=x[i];
    }
    else if(x[i]>max){
       max=x[i];
    }
}


   

    
    printf("The Smallest number is : %d\n", min);
    printf("The Largest number is : %d ", max);    

    return 0;


}