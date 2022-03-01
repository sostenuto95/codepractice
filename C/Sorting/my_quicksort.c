
#include <stdio.h>

int* my_quicksort(int *src, int count)
{
    int temp;   
    
    for(int i=0;i<count;i++)
     {
        if(src[i]>src[count-1])
         {
            temp=src[i];
            src[i]=src[count-1];
            src[count-1]=temp;
            
        }
    }
    return src;
}






int main()
{
    int list[8]={10,-20,80,30,90,40,50,70};
     
    int count=sizeof(list)/sizeof(int);
    int n=0;
     
    printf("These are the Non-Sorted Numbers:\n");
    for(int i=0;i<count;i++)
    {
        printf("%d ",list[i]);
    }

    //Where the MAGIC Happens     
    while(n<count)
    {
        my_quicksort(list,count-n);
        n++;   
    }        
             
        
         
         
    printf("\nThis is the Sorted List:\n");
    for(int i=0;i<count;i++)
    {
        printf("%d ",list[i]);
    }
     
}
