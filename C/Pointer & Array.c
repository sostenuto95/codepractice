#include <stdio.h>

void array_fill(int* out, int size,int value){
     for(int i=0;i<size;i++){
        out[i]=value;
    }
    
}
void array_print(int* out, int size){
     for(int i=0;i<size;i++)
     {
           printf("%d ",out[i]);
       }
       printf("\n");
    }
void array_copy(int* dst,int* src,int size)
{
    for(int i=0;i<size;i++)
    {
        dst[i]=src[i];
    }
}
int main()
{   
    
    int N=10;
    int a[10];
    int b[10];
    for(int i=0;i<N;i++){
        a[i]=i;
    }
    
    
    
    array_copy(b,a,N);
    printf("a= "); 
 
    array_print(a,N);
 
 
    array_fill(b+4, N,2);
    printf("b= "); 
    array_print(b,N);
 
    
    
    array_fill(a+4, N,-8);
    printf("new a= "); 
 
    array_print(a,N);
    
    return 0;
}