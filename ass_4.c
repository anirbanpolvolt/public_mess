#include<stdio.h>
struct random
{
	int roll_num;
	int test1_marks;
	int test2_marks;
}r[3];
void main()
{
	int i, avg[3];
	printf("Add roll no than test1 marks than test2 marks \n");
	for(i=0;i<3;i++){
		scanf("%d %d %d ", &r[i].roll_num, &r[i].test1_marks, &r[i].test2_marks);
		avg[i]=(r[i].test1_marks+r[i].test2_marks)/2;
	}
	if (avg[1] > avg[2])
    {
        if (avg[1] > avg[3])
        {
            printf("Roll no 1 is the first rank holder \n");
        }
        else
        {
            printf("Roll no 3 is the first rank holder\n");
        }
    }
    else if (avg[2] > avg[3])
        printf("Roll no 2 is the first rank holder\n");
    else
        printf("Roll no 3 is the first rank holder\n");
}