#include <stdio.h>
int main()
{

    int i;
    int length = 10;
    int a[10];
    void bubble_sort(int a[], int length);
    
    
    for(i=0;i<length;i++)
    {
    
    a[i]=(rand() % 79 );
    }
    
    bubble_sort(a,length);


  
     printf("Sorted!\n");
    for (int i=0;i<length;i++){

        printf("a[%d] = %d\n", i, a[i]);
    }

   

    printf("\nOff you Go !\n");
    return 0;
}


void bubble_sort(int a[], int length)
{

        for (int i=0;i<length;i++)
        {
        for(int j=0;j<length-1-i;j++) // -i = look at less element each pass
        {
            if(a[j] > a[j+1]){   // Change to < for desending order 
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    

}