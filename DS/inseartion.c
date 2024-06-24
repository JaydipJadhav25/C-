#include <stdio.h>

void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        /* code */
        printf(" % d \t ", arr[i]);
    }
}
int indinserction(int arr[], int size, int index, int elemant)
{

    if (index >= 100)
    {
        return 0;
    }

    for (int i = (size - 1); i >= index; i--)
    {
        arr [i + 1] = arr[i];
        
    }
    arr [index] = elemant;
    return 1;
}
int main()
{
    int size = 4, elemant = 20, index = 1;
    int arr[100] = {10, 30, 40, 50};

    display(arr, size);
    indinserction(arr, size, index, elemant);
    size +=1;
    printf(" inserction :\n");
    display(arr, size);

    return 0;
}