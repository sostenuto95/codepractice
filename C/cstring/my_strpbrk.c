#include <stdio.h>
#include <string.h>




char* my_strpbrk ( char * str1, char* str2)
{   
    char* p = str2;
    while(*str1)
    {
        while(*str2)
        {
            
            if(*str1==*str2)
                {
                    return str1;
                }
            str2++;
        }
        
        while(p!=str2) // Go back from the top 
        {
            str2--;
        }
        
        
       
        str1++;
        
    }
    
    return NULL;
    
}


int main ()
{
  char str[] = "This is a sample string";
  char key[] = "aeiou";
  char * pch;
  printf ("Vowels in '%s': ",str);
  pch = my_strpbrk (str, key);
  while (pch != NULL)
  {
    printf ("%c " , *pch);
    pch = my_strpbrk (pch+1,key);
  }
  printf ("\n");
  return 0;
}