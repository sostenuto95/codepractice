#include <stdio.h>
#include <string.h>



char* my_string_chr(char* source,int character)
{
    while(*source){
    if(*source==character)
    {
        return source;
    }
        source++;
    }
    
    if(*source!=character){
        return NULL;}
}

int main()
{   
  char str[] = "This is a sample string";
  char * pch;
  printf ("Looking for the 's' character in \"%s\"...\n",str);
  pch=my_string_chr(str,'s');
  
  while (pch!=NULL)
  {
    printf ("found at %ld\n",pch-str+1);
    pch=my_string_chr(pch+1,'s');
  }
    return 0;
}
