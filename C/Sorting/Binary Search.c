
#include <stdio.h>


    
int main()
{
 
 int list[10] = {2,5,8,12,23,26,56,72,91,100};
 
 int count = sizeof(list)/sizeof(int); 

 int middle=count/2;
 int high=count;
 int low=0;
 int j = 0;
 int found = 0;

    printf("Here is the list:\n");
        for(int i=0;i<count;i++)
        {
            
            printf("%d ",list[i]);
        }
    printf("\nWhat are you looking for ? ");
            
    int user_search=0;    

    scanf("%d",&user_search);
        while(user_search<list[0] || user_search>list[count-1])
        {
            printf("Your Value is beyond our scope, choose again beween %d and %d :",list[0],list[count-1]);
            scanf("%d",&user_search);
        }
 

        
        for(int i=0;i<count;i++)
        {
            while(user_search<=list[middle])  
            {
                if(user_search==list[middle])
                    {
                        printf("Your number is the [%d] element of the list",middle);
                        found=1;
                        i=count;
                        break;
                    }
                    
                Low_Label:

                middle/=2;
                if(user_search==list[middle])
                {
                    printf("Your number is the [%d] element of the list",middle);
                    found=1;
                    i=count;
                    break;
                }
                if(user_search>list[middle])
                {
                    goto HIGH_Label;
                }

            }  
            
            while(user_search>list[middle])  
            {
                HIGH_Label:
                

                
                low = middle+1;
                
                middle+=(count-middle)/2;
                if(user_search==list[middle])
                {
                    printf("Your number is the [%d] element of the list",middle);
                    found=1;
                    i=count;
                    break;
                }
                if(user_search==list[low])
                {
                    printf("Your number is the [%d] element of the list",low);
                    found=1;
                    i=count;
                    break;
                }
                
                
                if(user_search<list[middle])
                {
                    goto Low_Label;
                }

            }  
            
            
            
        }
        
        if(found!=1)
            {
                printf("You search for %d is not vaild in our system",user_search);
            }       
    
    
 
}
