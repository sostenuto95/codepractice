#include <stdio.h>
#include <string.h>





char * my_strncat ( char * dst, char * src, size_t num )
{
    while(*dst) // To the End
    {
        dst++;
    }
    
        for(int c=0;c<num;c++)  //strncpy 
        {
            *dst++=*src++;
        }
    
    return dst;
}


int main ()
{
  char str1[20];
  char str2[20];
  strcpy (str1,"To be ");
  strcpy (str2,"or not to be");
  my_strncat (str1, str2, 9);
  puts (str1);
  return 0;
}