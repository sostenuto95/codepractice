#include <stdio.h>
#include <string.h>




char * my_strncpy ( char * dst, char * src, size_t num )
{
       
    for(int c=0;c<num;c++)
    {
        *dst++=*src++;
    }
    return dst;
}



int main()
{  
    char str1[]= "To be or not to be";
    char str2[40];
    char str3[40];
    
      /* copy to sized buffer (overflow safe): */
    my_strncpy ( str2, str1, sizeof(str2) );
    
      /* partial copy (only 5 chars): */
    my_strncpy ( str3, str2, 5 );
    str3[5] = '\0';   /* null character manually added */
    
    puts (str1);
    puts (str2);
    puts (str3);

  return 0;
}