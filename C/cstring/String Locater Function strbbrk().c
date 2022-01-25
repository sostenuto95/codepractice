
#include <stdio.h>
#include <string.h>


// strbbrk()
char* my_string_pbrk(char* source,char* character)
{
    int len = strlen(character);
        
           for(;*source;)
           {
                      
            if(*source==*character) //success
            {
                //printf("Found %s\n",source);
                return source;
            }
                
            do{
                                          
                if(*source==*character) //success
                {
                    //printf("Found %s\n",source);
                    return source;
                }
                   // printf("NULL\n");
                    *character++;   
                   // printf("%p\n",character);//Try all posibilities
                    if(*character=='\0')
                    {
                      // printf("NULL");
                       source++;
                       *character=character[0];
                       // return NULL;   // charactor not foud;
                    }
                       
               
                }while(source!=character);
                
            }
    
}

int main()
{   
//  char str[] = "This is a sample string";
    char str[] = "aeeekeuikaiou";
    char key[] = "aeiou";
    char * pch;
    printf ("Vowels in '%s': ",str);
    pch = my_string_pbrk(str, key);
    while (pch != NULL)
      {
        printf ("%c " , *pch);
        pch = my_string_pbrk(pch+1,key);
      }
        printf ("\n");
        return 0;
}