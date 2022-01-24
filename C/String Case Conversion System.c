
#include <stdio.h>
#include <string.h>

void string_upper(const char* c){ // Up Function
    int diff = 'a'-'A';
    int n= strlen(c);
   /* for(int i=0;i<n;i++)
    {   
        int*p =&c[i]; // use *p to replace c[i]
        if(*p>='a' && *p<='z')
        {
          *p -= (diff);
        }
        // else {c[i] = c[i];}
    }*/
    for ( ; *c;c++){
        if(*c >= 'a' && *c = 'z')
        {
            ^c -= diff;
        }
    }
   
    printf("%s\n",c);
}

void string_lower(char* c){ // Low Function
  for(int i=0;i<strlen(c);i++)
{
    if(c[i]>='A' && c[i]<='Z')
        {
       c[i] = c[i]+('a'-'A');
        }
        else {c[i] = c[i];}
    }
      printf("%s\n",c);
}

void string_mix(char* c){ // Mix Function
  for(int i=0;i<strlen(c);i++)
    {
        if(c[i]>64 && c[i] <=90){
       c[i] = c[i]+('a'-'A');  
        }
        else if(c[i]>=97 && c[i] <=122){
          c[i] = c[i]-('a'-'A');   
        }
        
    }
    printf("%s\n",c);
}



int main()
{   
    
    char ul[20];
    char input[20];
    
    
    char* up ="Uppercase";
    char* low ="Lowercase";
    char* mix ="Mix";
    
    printf("Wellcome to Case Conversion System,\n");
    printf("Would you like to convert to %s , %s or %s?\n",up,low,mix);
    scanf("%s",ul);
    

    
    if(strcmp(ul,up)!=0 && strcmp(ul,low)!=0 && strcmp(ul,mix)!=0 ){
        
        printf("Piss Off you Horrible person!");
        
    }  
    else{
  
    printf("Now Type it away:\n");
    
    scanf("%s",input);
  

       if (strcmp(ul,up)==0){ // Uppercase Conversion
        
        string_upper(input);
        
        
            printf("%s : Off You Go",up);
        }
        
        else if (strcmp(ul,low)==0){ // Lowercase Conversion 
        
        string_lower(input);
        
            printf("%s : Off You Go",low);
        }
        
        else if (strcmp(ul,mix)==0){ // Mixcase Conversion 
        
        string_mix(input);
        
            printf("%s : Off You Go",mix);
        }
    
    else 
    printf("Piss Off you Wanker!");
 
    }

    return 0;
}