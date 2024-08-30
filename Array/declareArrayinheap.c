#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // created in stack
    int *p;
    p = malloc(5 * sizeof(int)); // created array in heap
    p[0] = 6;                    // assigning values
    p[1] = 7;                    // assigning values
    p[2] = 8;                    // assigning values
    p[3] = 9;                    // assigning values
    p[4] = 10;                   // assigning values

    // printing the values
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d\n",p[i]);
    }
}