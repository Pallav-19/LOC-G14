#include <stdio.h>

int main()
{
    int mat1[2][2] = {{8, 2}, {3, 9}};
    int mat2[2][2] = {{3, 4}, {1, 0}};
    printf(" The sum of the matrices is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", mat1[i][j] + mat2[i][j]);
        }
        printf("\n");
    }
    printf("The Multiplication of matrices is : \n");
    printf("%d %d\n%d %d", (mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0]), mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1], mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0], mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1]);

    return 0;
}