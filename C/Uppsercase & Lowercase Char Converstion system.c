#include <stdio.h>

int main()
{   
    printf("Uppsercase & Lowercase Converstion system: \n");
    printf("Input a char \n");
    char c;
    scanf("%c", &c);
    if (c>64 && c <=90){
    c = c+('a'-'A');
           printf("Here is your Lowercase char %c", c);
    }
    else if (c>=97 && c <=122 ){
    c =  c-('a'-'A');
           printf("Here is your Uppercase char %c", c);
    }
    else {
        printf("This is not a Char , You Wanker ");
    }
    
    
 
    
    return 0;
}
