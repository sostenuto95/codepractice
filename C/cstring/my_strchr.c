#include <stdio.h>
#include <string.h>




char* my_strchr ( char * str, int character)
{

    while(*str)
    {
        if(*str==character)
        {
            return str;
        }

        str++;
       
    
    }
    return NULL;
}


int main ()
{
  char str[] = "This is a sample string";
  char * pch;
  printf ("Looking for the 's' character in \"%s\"...\n",str);
  pch=my_strchr(str,'a');
  while (pch!=NULL)
  {
    printf ("found at %ld\n",pch-str+1);
    pch=my_strchr(pch+1,'a');
  }
  return 0;
}