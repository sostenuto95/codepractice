#include <stdio.h>
#include <string.h>

void string_print(char* p)
{   
    for(int i=0;p[i];i++){
        printf("%c",p[i]);
    }
    

}
void string_copy(char* dst,char* src){
    while(*src)
    {
        *dst = *src;
        dst++;
        src++;
    }
    *dst=0;
}
void string_concatenate(char* dst,char* src){
    while(*dst)  // Get Hello
    {
        dst++;
    }
    string_copy(dst,src); // Copy World to Hello char*
}
int string_length(char* p)
{   // Find Length of a char[]; 
    char*x =p;
    for(;*x;x++){}
    int len = x-p;
    return len;
    
}
int main()
{   
    

    
    char c= 'A';
    char s[] = "World !";
    char a[100];
    a[0]=0; // Initialize 
    char b[100];
    
    
    
    string_copy(a,"Hello ");
    printf("%s\n",a);
    
    
    string_concatenate(a,s);
    
    printf("%s\n",a);
    
    
    
    strncpy(b, "Bello",100);  // <string.h> copy 
    printf("%s\n",b);
    
    int length = strlen(b); // <string.h> length
    
    strncat(b," Wurld!",100-length);  // <string.h> Combine
    printf("%s\n",b);
    
    
    return 0;
}