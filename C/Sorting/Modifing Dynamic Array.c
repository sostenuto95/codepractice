
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



typedef struct {
    int* data;
    int size;
    int capactiy;
    int increment;

    
} MyArray;

void MyArray_init(MyArray* a)
{
    a->data = NULL;
    a->size = 0;
    a->capactiy = 0;
    a->increment = 8;
}

void MyArray_Release(MyArray* a)  // Clean up before Shut Down ;
{
    if(a->data)
    {
        free(a->data);
    }
    
    a->data = NULL;
    a->size = 0;
    a->capactiy = 0;

    
}

int round_pow2(int v)
{
    int m = 1;
    for(int i = 0;;i++)
    {
        if(m >= v)
        {
            return m;
        }
        
        if(i >31) // Prevent Stackoverflow for 32bit System
        {
            printf("StackOverflow");
            abort();
            return -1;
        
        }
        
        
        m *= 2;
    }
}



void MyArray_ResizeCapacity(MyArray* a, int new_capacity)
{
    
    new_capacity = round_pow2(new_capacity);

    printf("MyArray_ResizeCapacity %d to %d\n",a->capactiy ,new_capacity);    
    
    int* new_data = malloc(new_capacity * sizeof(int) );
    if(!new_data) 
    {
        printf("Cannot Allocate");
        abort();
        return;
    }
    
    
    for(int i = 0; i < a->size; i++) // Copy Existing Data to new Array(temp) , then put it back 
    {
        new_data[i] = a->data[i];
        
    }
    
    if(a->data)  // Aviod Memory Leak;
    {
        free(a->data);        
    }
    
    
    
    a->data = new_data;
    a->capactiy = new_capacity;// Update new capactiy
}


void MyArray_Resize(MyArray*a, int new_capacity) // If it's not Exceeding capactiy, u don't need to Allocate new chunk of RAM;
{
    if (a->capactiy < new_capacity)
    {
        MyArray_ResizeCapacity(a, new_capacity);
    }
    a->size = new_capacity;
    
}


void MyArray_Append(MyArray* a , int value)
{
    printf("append\n");
    
    MyArray_Resize(a, a->size +1 ); //Expand array 
    a->data[a->size -1] = value; // Put in Value 
    
}


void input_numbers(MyArray* a)
{
    for (;;) 
    {
        int i;
        printf("input number: ");
        scanf("%d", &i);
        if(i<0)
            {
                break;   
            }

        MyArray_Append(a, i);
    }
    
    
}

void MyArray_Print(MyArray* a)
{
    for(int i =0; i < a->size; i++)
    {
        printf("%d ", a->data[i]);
        
    }
    printf("\n"); 
    
    
}

void MyArray_Remove(MyArray* a, int index)
{
    printf("Removing a[%d]\n" ,index);
    for(int i = index; i< a->size - 1; i++)
    {
        a->data[i]=a->data[i+1];
    }
    a->size--;

}

void MyArray_Insert(MyArray* a, int index , int value)
{
    printf("Adding a[%d]= %d\n" ,index, value);
    a->size++;
    
    

    for(int i = 1; i < (a->size - index +1); i++)
    {
        a->data[a->size-(i-1)]=a->data[a->size-i];
    }
    
    a->data[index] = value;
 
}

void MyArray_Remove_Unsorted(MyArray* a, int index)
{
    printf("Removing a[%d]\n" ,index);
    a->data[index] = a->data[a->size];
    
    a->size--;

}




int main()
{
    MyArray a;
    
    MyArray_init(&a);
    
    //input_numbers(&a);
    
    //MyArray_Resize(&a,10);  // Init get a Chunk of RAM First before Requesting immediately 
    
    for (int i = 0; i < 10; i++)
    {
        MyArray_Append(&a,i);
    }
    
    
    MyArray_Print(&a);
    
    
    MyArray_Remove(&a,5);
    MyArray_Print(&a);
    MyArray_Insert(&a,5,5);
    MyArray_Print(&a);
    MyArray_Remove_Unsorted(&a,5);
    MyArray_Print(&a);
    
    MyArray_Release(&a);
    

    
}