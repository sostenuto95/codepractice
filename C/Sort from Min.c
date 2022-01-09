#include <stdio.h>
#include<stdlib.h>
//#define N 10

int main()
{   
int x[5];
int h=5;
    
    printf("Please pick 5 numbers\n");
    for(int i=0;i<h;i++)
    {
    scanf("%d",&x[i]);
    }
    
    printf("We are sorting.....\n");
    for(int j=0;j<5;j++){
   int min_index = j;
   int min_value =x[j];

    for(int i = j+1; i<5;i++){
    if (x[i]<min_value){
        
       min_value=x[i];
       min_index=i;
    }
    for(int i=0;i<5;i++){
        printf("%d ", x[i]);
    }
    
    printf("\nj=%d,min_index = %d\n",j, min_index);
   
    int temp = x[j];
    x[j]= x[min_index];
    x[min_index]=temp;
}
}
    for(int i =0;i<5;i++){
        printf("%d ", x[i]);
    }
    
    

    
   // printf("The Smallest number is : %d\n", min);
    // printf("The Largest number is : %d ", max);    

    return 0;


}