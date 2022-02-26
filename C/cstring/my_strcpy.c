#include <stdio.h>
#include <string.h>




char * my_strcpy ( char * dst, char * src )
{
    char* dst_strat = dst;   
    while(*src)
    {
        *dst++=*src++;
    }

    *dst=0;
    return dst_strat;
}



int main()
{   
    char str1[]="Sample string";
    char str2[40];
    char str3[40];
        my_strcpy (str2,str1);
        my_strcpy (str3,"copy successful");
        printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
    return 0;
}
