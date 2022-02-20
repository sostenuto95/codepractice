#include <stdio.h>
#include <string.h>




char* my_strrchr ( char * str, int character) // Last Occurrence
{

    while(*str)
    {
      str++;  
    }
    
    str--; // Back to last string
    
    while(*str)
    {
    if(*str==character)
        {
            return str;
        }
        str--;
    }
    return NULL;
    
}


int main ()
{
  char str[] = "This is a sample string";
  char * pch;
  pch=my_strrchr(str,'a');
  printf ("Last occurence of 'a' found at %ld \n",pch-str+1);
  return 0;
}