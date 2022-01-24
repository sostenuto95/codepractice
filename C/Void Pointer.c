
#include <stdio.h>
#include <conio.h>
#include <string.h>
void array_zero(void* dst,int bytes)
{
    char* p = dst;
    for(int i=0; i<bytes;i++)
    {
        p[i]=0;
    }    
}
void array_copy(void* dst,void* src,int bytes)
{
    char* d = dst;
    char* s = src;
    for(int i=0; i<bytes;i++)
    {
        d[i]=s[i];
    }    
}

int main()
{
   int a [10];
   int b [10];
   
   array_zero(a,10*sizeof(int));
   array_copy(b,a,10*sizeof(int));


    char c[10];
    char d[10];
    
    array_zero(c,10*sizeof(char));
    array_copy(d,c,10*sizeof(char));
    
    
    // Pointer Notes
    int a= 1; // int
    int* p = &a; // pointer of int
    int ** g = &p; // pointer of pointer of int  
        
    
    return 0;
}
