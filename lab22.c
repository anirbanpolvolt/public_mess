#include<stdio.h>

int main()
{
    int even, odd, val1, val2, i, j;
    unsigned long long fact1 = 1, fact2 =1;
    printf("Enter the positive even number");
    scanf("%d",&val1);
    if (val1 <= 0) {
        if (val1 == 0)
            {printf("You entered 0.");
                goto test;}
        else{
            printf("You entered a negative number.");
                goto test;}
    } 
    else
        if(val1 % 2 == 0)
        printf("Even number registered \n", val1);
    else
        {printf("Input even number");
            goto test;}
    even = val1;    
    printf("Enter the positive odd number");
    scanf("%d",&val2);
    if (val2 <= 0) {
        if (val2 == 0)
            {printf("You entered 0");
                goto test;}

        else
            printf("You entered a negative number.");
    } 
    else
        if(val2 % 2 == 0)
        {printf("Input odd number");
            goto test;}
    else
        printf("Odd number registered \n");
    odd = val2;
    if (val1 < 0)
        printf("Error! input positive number");
    else {
        for (i = 1; i <= val1; ++i) {
            fact1 *= i;
        }
    if (val2 < 0)
        printf("Error! input positive number");
    else {
        for (j = 1; j <= val2; ++j) {
            fact2 *= j;
        }
    }
    if (fact1>fact2){
    printf("Factorial of even number is greater \n");}
    else {printf("Factorial of odd number is greater \n");}
    }
    printf("Factorial of even number = %llu \n", fact1);
    printf("Factorial of odd number = %llu \n", fact2);
    test:return 0;
}