#include <stdio.h>
#include <string.h>




size_t my_strcspn ( char * str1, char* str2)
{   
    char* p = str2;
    int c =0;
    while(*str1)
    {
        while(*str2)
        {
            
            if(*str1==*str2)
                {
                    return c;
                }
            str2++;
        }
        
        while(p!=str2) // Go back from the top 
        {
            str2--;
        }
        
        
        c++;
        str1++;
        
    }
    
    return c;
    
}


int main ()
{
  char str[] = "fi4ao3";
  char keys[] = "1234567890";
  int i;
  i = my_strcspn (str,keys);
  printf ("The first number in str is at position %d.\n",i+1);
  return 0;
}