#include <string.h>
#include <stdio.h>
void my_string_copy(char* dst,char* src){
    for(;*src;){
        *dst=*src;
        dst++;
        src++;
    }
    *dst=0;  // Done copy
}
int main()
{
    char a[]= "omgwtf";
    char b[10];
    char c[10];
    
    
    my_string_copy(b,a);
    strcpy(c,a);
    
    printf("my_string_copy %s\n",b);
    printf("strcpy %s",c);
    return 0;
}
