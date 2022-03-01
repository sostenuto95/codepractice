
#include <stdio.h>

int* my_bubblesort(int* src,int count)
{
    int temp;
    int i = 0;
    int j = 0;
    int k = 0;

    while(k<count-1)
    {
        while(j<count-1)
        {
            if(src[i]>(src[i+1]))
            {
                temp = src[i+1];
                src[i+1]=src[i];
                src[i] = temp;
            }
            j++;
            i++;
        }
        i=0;
        j=0;
        k++;
    }
    
    return src;
}

int main()
{
    int a[7] = {9,7,-5,60,2,95,-3};
    
    int b = sizeof(a)/sizeof(int);   
    
    printf("These are the UNSORTED numbers:");
    for(int i=0;i<b;i++)
    {
        if(i-b==-1)
        {
             printf("%d. ",a[i]);
        }
        else
        {
            printf("%d, ",a[i]);
        }
    }
    

    
    my_bubblesort(a,b);
    
    
    printf("\n\nThese are the SORTED numbers:");
    
    for(int i=0;i<b;i++)
    {
        if(i-b==-1)
        {
             printf("%d. ",a[i]);
        }
        else
        {
            printf("%d, ",a[i]);
        }
    }
    
    
    return 0;
}
