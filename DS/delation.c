#include <stdio.h>

void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        /* code */
        printf(" % d \t ", arr[i]);
    }
}
int indelastion(int arr[], int size, int index)
{


    for (int i = index; i <= (size-1); i++)
    {
        arr [i] = arr[i+1];
        
    }
    
    return 1;
}
int main()
{
    int size = 4,  index = 1;
    int arr[100] = {10, 30, 40, 50};

    display(arr, size);
    indelastion(arr, size, index );
    size -=1;
    printf("\n");
    printf(" delation :\n");
    display(arr, size);

    return 0;
}