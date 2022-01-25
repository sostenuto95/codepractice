
#include <string.h>
#include <stdio.h>
char* my_string_ncopy(char* dst,char* src, size_t num){
    for(;*src;){
        *dst=*src;
        dst++;
        src++;
        if(*dst==num){
            return dst;
        }
    }
    *dst=0;  // Done copy
}
int main()
{
  char str1[]= "To be or not to be";
  char str2[40];
  char str3[40];

  /* copy to sized buffer (overflow safe): */
  //strncpy ( str2, str1, sizeof(str2) );
  my_string_ncopy ( str2, str1, sizeof(str2) );

  /* partial copy (only 5 chars): */
  //strncpy ( str3, str2, 5 );
  my_string_ncopy ( str3, str2, 5 );
  str3[5] = '\0';   /* null character manually added */

  puts (str1);
  puts (str2);
  puts (str3);
    return 0;
}
