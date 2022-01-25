
#include <stdio.h>
#include <string.h>


// Reverse Engineering strrchr();
char* my_string_rchr(char* source,int character)
{
    char* p = source;
    while(*source){
    if(*source==character)
    {
        p=source;
        printf("%p\n",source);

    }
        source++;
        if(*source==strlen(source))
        {
        return p;
        }
    }
    
    if(*source!=character){
        return NULL;}
}

int main()
{   
  char str[] = "This is a sample string";
  char * pch;
  printf ("Looking for the 's' character in \"%s\"...\n",str);
 /* pch=my_string_chr(str,'s');
  
  while (pch!=NULL)
  {
    printf ("found at %ld\n",pch-str+1);
    pch=my_string_chr(pch+1,'s');
  }
  */
  
  
  pch=strrchr(str,'s');
  printf ("Last occurence of 's' found at %ld \n",pch-str+1);
  
  pch=my_string_rchr(str,'s');
  printf ("my Last occurence of 's' found at %ld \n",pch-str+1);
  
  
    return 0;
}