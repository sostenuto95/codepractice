#include <string.h>
#include <stdio.h>
int my_string_compare(char* dst,char* src){
    int value;
    for(;*src;){
        if(*dst!=*src)
        {
            value = *dst-*src;
            return value;
        }
       if (*dst=*src)
        {
            dst++;
            src++;
        }
       
        
    }
    return 0;
}
int main()
{
    char a[]= "omgbtf";
    char b[10]= "omgcTF";
    char c[10] ;
    
    
    
   // strcpy(c,a);
    
   
    int x =my_string_compare(b ,a);
    
    if(0==x) // Success
    {
        printf("%s & %s are the same string",b,a); 
    }
    else{  // Fail
        printf("They are not the same , the value is  %d\n",x);
    }
    return 0;
}
