/*
pointer can point to the array but it points to the address of the first element
Syntax - data_type (*var_name)[size_of_array];
*/


// C program to understand difference between
// pointer to an integer and pointer to an
// array of integers.
#include<stdio.h>

int main()
{
    // Pointer to an integer
    int *p;

    // Pointer to an array of 5 integers
    int (*ptr)[5];
    int arr[5] = {10,20,30,40,50};

    // Points to 0th element of the arr.
    p = arr;

    // Points to the whole array arr.
    ptr = &arr;

    printf("p = %p, ptr = %p\n", p, ptr);

    p++;
    ptr++;

    printf("p = %p, ptr = %p\n", p, ptr);   // means pointer is pointing to the address of the first element
    printf("\n%d",*p + 1); //adding value 1 to the 20
    p++;    //points to 3rd element
    printf("\n%d",*(p + 1));    //points to the 4th element
    printf(" p : = %d, ptr = %u\n", *p, *ptr);

     int arr2[3][4] = {
                    { 10, 11, 12, 13 },
                    { 20, 21, 22, 23 },
                    { 30, 31, 32, 33 }
                  };
      int i, j;
      for (i = 0; i < 3; i++)
      {
        printf("Address of %dth array = %d %d\n",
                        i, arr2[i], *(arr2 + i));

        for (j = 0; j < 4; j++)
          printf("%d %d ", arr2[i][j], *(*(arr2 + i) + j));
        printf("\n");
      }


    return 0;
}
