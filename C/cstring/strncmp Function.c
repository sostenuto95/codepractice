
#include <string.h>
#include <stdio.h>
int my_string_ncompare(char* dst,char* src, size_t num){
    int value;
    int n;
        for(;*src;){
            if(*dst!=*src)
            {
                value = *dst-*src;
                return value;    // Doesn't Match
            }
           while(*dst==*src)
           {
                dst++;
                src++;
                num--;
                if(num==0)
                {
                return 0; // Match
                } 
            }
        }
            
        
        
    
} 
int main ()
{
  char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
  int n;
  puts ("Looking for R2 astromech droids...");
  for (n=0 ; n<3 ; n++)
    if (my_string_ncompare(str[n],"R2xx",2) == 0)
    {
      printf ("found %s\n",str[n]);
    }
  return 0;
}
 