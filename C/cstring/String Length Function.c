#include <stdio.h>
#include <string.h>



int my_string_len(char* c){
    int count=0;
    for(;*c;){
      *c!='\0';
      *c++;
      count++;
    }
    return count;
    
}
int main()
{   
    char a[30] ;
    printf("Give me a word , i'll return you the str_len\n");
    scanf("%29s",a);
    
    

    
    
    printf("my_string_len is : %d\n",my_string_len(a));
    printf("str_len is : %d",(unsigned)strlen(a));
    return 0;
}

