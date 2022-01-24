
#include <stdio.h>
#include <string.h>

void my_string_copy(char* dst,char* src){
    for(;*src;){
        *dst=*src;
        dst++;
        src++;
    }
    *dst=0;  // Done copy
}

void my_string_cat(char* destination,char* source){
    int count=0;
    for(;*destination;){
      *destination!='\0';
      *destination++;

    }
    my_string_copy(destination,source);
    
}
int main()
{   
    char str[80];
  my_string_copy(str,"these ");
  my_string_cat(str,"strings ");
  my_string_cat(str,"are ");
  my_string_cat(str,"concatenated.");
  puts(str);
    return 0;
}



