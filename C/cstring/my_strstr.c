#include <stdio.h>
#include <string.h>

//Returns a pointer to the first occurrence of str2 in str1, or a null pointer if str2 is not part of str1.


char* my_strstr ( char * str1, char* str2)
{   
    int c = strlen(str2);
    int k =0;
    char* p = str2;
    while(*str1)
    {
        
        if(*str1==*str2) // First Hit
            {
                while(*str2)
                {
                    if(*str1==*str2)
                    {
                        str1++;
                        str2++;
                        k++;  
                    }
                   else break;
                    
                }
                if(k==c)
                {
                    return str1-k;  // Combo
                }
                    
            
            }
            
            
            
        while(p!=str2) // Go back from the top 
            {
                str2--;
                
            }
            
        str1-k; // Clear cache
        k=0;    
        str1++;  // Move on to the next one
    }
    
    return NULL;
    
}


int main ()
{
  char str[] ="This is a simssssssimple string";
  char * pch;
  pch = my_strstr (str,"simple");
  if (pch != NULL)
    strncpy (pch,"sample",6);
  puts (str);
  return 0;
}