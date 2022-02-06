
//DC2021BTE0015
//taking 015 as input
#include <stdio.h>
int main()
{
    char r_no[13]="DC2021BTE0015";
    printf("Roll Number : %s\nName : Snehil Jha\nDepartment : CSE\n\n",r_no);
    int a[3][3] = {0, 1, 5, 0, 1, 5, 0, 1, 5};
    int b[3][3] = {0, 0, 0, 1, 1, 1, 5, 5, 5};
    int lda[3], rdb[3], sum1=0, sum2=1, k = 0;

    //Getting Left Diagonal of first array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                lda[i] = a[i][j];
            }
        }
    }

    //Getting Right Diagonal of Second array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((i + j) == 2)
            {
                rdb[i] = b[i][j];
            }
        }
    }

    //Solving The first problem
    for (int i = 0; i < 3; i++)
    {
        sum1 = sum1 + (lda[i] * rdb[i]);
    }
    //Solving The seconad problem
    for (int i = 0; i < 3; i++)
    {
        sum2 = sum2 * (lda[i] + rdb[i]);
    }
    //***************************Printing the solutions****************************

    printf("The First 2-D Matrix is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Second 2-D Matrix is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Left Diagonal elements of first 2-D matrix is : \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",lda[i]);
    }
    printf("\n");

    printf("\nThe Right Diagonal elements of second 2-D matrix is : \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",rdb[i]);
    }
    printf("\n");

    printf("\nThe sum of the multiplication of the left diagonal elements of one matrix corresponding to right diagonal elements of other matrix is : %d\n", sum1);
    printf("\nThe multiplication of the sum of the left diagonal elements of one matrix corresponding to right diagonal elements of other matrix is : %d\n", sum2);
    printf("\nThe Final sum is : %d\n", (sum1 + sum2));
    return 0;
}