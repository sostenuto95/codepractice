#include <stdio.h>


    
int main()
{
 
 int list[12] = {2,5,8,11,12,23,26,56,72,91,99,100};
 
 int count = sizeof(list)/sizeof(int); 

 int middle=count/2;
 int low=0;
 int found = 0;
 int n = 0;
 
 

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
 
        if(user_search==list[middle]) // Lucky
        {
            found = 1;
                
        }
        
        while(user_search!=list[middle])
        {

            
            if(user_search<list[middle])  // Low Tier Divide and Conquer
            {
                if(low==0)
                {
                  middle/=2;  
                }
                else if(low!=0)
                {
                    middle--;
                }
     
                if(user_search==list[middle])
                {
                    found = 1;
                    break;
                }
                
            }
            
    
   
            if(user_search>list[middle]) // High Tier Divide and Conquer
            {
                
                low=middle+1;
                middle+=(count-middle)/2;
               
                if(user_search==list[middle])
                {
                    found = 1;
                    break;
                }
                if(user_search==list[low])
                {
                    found = 2;
                    break;
                }
                
                
                
            }
            
            n++;
            
            if(n==count-1)
            {
                printf("You search for %d is not vaild in our system",user_search);
                break;
            }
            
            
        }  
            
            
            
   

        
        if(found==1)
            {
                printf("Your number is the [%d] element of the list",middle);
            }    
        if(found==2)
            {
                printf("Your number is the [%d] element of the list",low);
            }  
    
}
 