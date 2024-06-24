#include <stdio.h>

int main()
{

   int arr [] ={ 10,20,30,40,50,60,70};


   for (int i =0; i<7; i++)
   {

    printf(" %d \t ",arr[i]);
   }
// ascing element using pointers
printf("\n");
int arr1 []={10,20,30,40,50,60,70};
//  int *ptr =&arr1[0];
 int *ptr =arr1;// array is woring as pointer


   for (int i =0; i<7; i++)
   {

    printf(" %d \t ",*(ptr+i));

   }




    return 0;
}