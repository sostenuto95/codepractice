#include <stdio.h>
#include <string.h>



size_t my_strlen(  char * src )
{
    char* s = src;
    for(;*src;src++){
        
    }
    
    return src-s;
}



int main()
{   
    char a[30] ;
    printf("Give me a word , i'll return you the str_len\n");
    scanf("%29s",a);
    
    

    
    
    printf("my_string_len is : %ld\n",my_strlen(a));
    printf("str_len is : %d",(unsigned)strlen(a));
    return 0;
}
