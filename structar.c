#include<stdio.h>
struct random
{
	int a;
	int b;
}r[5];
void main()
{
	int i, sum1=0, sum2=0, sum;
	for(i=0;i<5;i++){
		scanf("%d %d", &r[i].a, &r[i].b);
		sum1+=r[i].a;
		sum2+=r[i].b;
	}
	sum=sum1+sum2;
	if (sum%2==0){
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}

}
