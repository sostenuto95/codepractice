#include <stdio.h>
#include <string.h>





int my_strncmp ( char * str1, char * str2, size_t num)
{

    for(int c = 0;c<num;c++)
    {
        if(*str1!=*str2)
        {
            return str1-str2;
        }

        str1++;
        str2++;
    
    }
    return 0;
}


int main ()
{
  char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
  int n;
  puts ("Looking for R2 astromech droids...");
  for (n=0 ; n<4 ; n++)
    if (my_strncmp (str[n],"R2Dx",3) == 0)
    {
      printf ("found %s\n",str[n]);
    }
  return 0;
}