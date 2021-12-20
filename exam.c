#include <stdio.h>
int main()
{
    int x1, x2, x3;
    int *p1, *p2, *p3;

    //taking input from user
    printf("Enter First Number: ");
    scanf("%d",&x1);
    printf("Enter Second Number: ");
    scanf("%d",&x2);
    printf("Enter Third Number: ");
    scanf("%d",&x3);

    //assigning the address of input numbers to pointers
    p1 = &x1;
    p2 = &x2;
    p3 = &x3;
    if(*p1 > *p2)
    {
	if(*p1 > *p3)
	{
		printf("%d is the largest number", *p1);
	}
	else
	{
		printf("%d is the largest number", *p3);
	}
    }
    else
    {
	if(*p2 > *p3)
	{
		printf("%d is the largest number", *p2);
	}
	else
	{
		printf("%d is the largest number", *p3);
	}
    }
    return 0;
}