#include<stdio.h>
int input()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    return n;
}
int add(int num1,int num2)
{
    int sum;
    sum = num1+num2;
}
void output(int num1,int num2,int sum)
{
    printf("the sum of %d and %d is %d",num1,num2,sum);
}
int main()
{
    int a,b,s;
    a = input();
    b = input();
    s = add(a,b);
    output(a,b,s);
    return 0;
}