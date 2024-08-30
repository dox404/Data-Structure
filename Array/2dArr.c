#include <stdio.h>

int main()
{
    // normal method
    int A[2][3];
    // initialize with values
    int B[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", B[i][j]);
        }
        printf("\n");
    }
    // initialize with pointer
    int *C[2];
    C[0] = (int *)malloc(3 * sizeof(int));
    C[1] = (int *)malloc(3 * sizeof(int));

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    // initialize with double pointer
    int **D = (int **)malloc(3 * sizeof(int *));
    D[0] = (int *)malloc(3 * sizeof(int));
    D[1] = (int *)malloc(3 * sizeof(int));

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", D[i][j]);
        }
        printf("\n");
    }
}