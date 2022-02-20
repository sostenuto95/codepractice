#include <stdio.h>
#include <string.h>





char * my_strcat ( char * dst, char * src )
{
    while(*dst) // To the End
    {
        dst++;
    }
    
        while(*src)  //strcpy 
        {
            *dst++=*src++;
        }
    
    return dst;
}


int main()
{   
  char str[80];
  strcpy (str,"these ");
  my_strcat (str,"strings ");
  my_strcat (str,"are ");
  my_strcat (str,"concatenated.");
  puts (str);
  return 0;
}