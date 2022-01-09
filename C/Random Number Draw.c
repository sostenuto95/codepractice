
#include <stdio.h>
#include <math.h>

int main()
{   

    int x = rand() % 101;
    int i;

    int min =1;
    int max =100;
    printf("Guess a Number form %d - %d\n", min ,max);
    for(;;){
        scanf("%d", &i);
        
        if  (i==x){
            break;
        }
    
        else{
            if(x>i){
                printf("The Number is larger than %d\n", i);
                min=i+1;
            }
            
            else{
                  printf("The Number is smaller than %d\n", i);
                  max =i-1;
            }
            
            printf("Take another Guess from %d - %d\n", min ,max);
        }
    }

        printf("You got it right! The Number is %d", x);
        return 0;
    


}