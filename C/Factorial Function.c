#include <stdio.h>

int main()
{
    
    int i, n;
    int factorial=1;
    printf("Gimme a Number\n");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        factorial=factorial*i ;
    }
    
    printf("The factorial of %d is : %d",n ,factorial);

    return 0;
}
