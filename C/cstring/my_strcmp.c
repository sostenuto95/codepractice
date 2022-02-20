
#include <stdio.h>
#include <string.h>





int my_strcmp ( char * str1, char * str2)
{
    while(*str1)
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


int main()
{   
  char key[] = "apple";
  char buffer[80];
  do {
     printf ("Guess my favorite fruit? ");
     fflush (stdout);
     scanf ("%79s",buffer);
  } while (my_strcmp (key,buffer) != 0);
  puts ("Correct answer!");
  return 0;
}
