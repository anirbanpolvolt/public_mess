#include<stdio.h>
void main()
{
    int i, j;
    int value1,value2;
    int row[3][3]={
        {0,0,9},
        {0,0,9},
        {0,0,9},
    };
    int col[3][3]={
        {0,0,0},
        {0,0,0},
        {9,9,9},
    };
    printf("First array \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\t%d",row[i][j]);
            }
            printf("\n");
    }
    printf("Second array \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\t%d",col[i][j]);
            }
            printf("\n");
    }
    value1=row[0][0]*col[0][2]+row[1][1]*col[1][1]+row[2][2]*col[2][0];
    printf("The value for the first question is %d \n", value1);
    value2=(row[0][0]+col[0][2])*(row[1][1]+col[1][1])*(row[2][2]+col[2][0]);
    printf("The value for the first question is %d \n", value2);
    printf("The final sum is %d \n", value1+value2);

}