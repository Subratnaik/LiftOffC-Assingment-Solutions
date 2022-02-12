#include<stdio.h>
int main()
{
    int a,b,sum,diff,mul,div,rem;
    printf("Enter two numberd \n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    diff=a-b;
    mul=a*b;
    div=a/b;
    rem=a%b;
    printf("Addition is %d \n",sum);
    printf("Subtraction is %d \n",diff);
    printf("multiplication is %d \n",mul);
    printf("Division is %d \n",div);
    printf("Reminder is %d \n",rem);
    return 0;
}