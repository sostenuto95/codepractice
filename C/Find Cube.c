#include <stdio.h>
#include <math.h>
int main(void){
    // Here your code !
    
    int n ;
    int a[n];
    int sum=0;

    printf("Give me some numbers \n");
    scanf("%d", &n);
    
    
    for (int i=1;i<=n;i++)
    {
    //    scanf("%d", &i);
      //  a[i-1]=i;
        printf("Number = %d and cube of the %d is : %g\n",i, i, pow(i, 3.0f));
    }
}