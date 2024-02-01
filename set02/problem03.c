#include<stdio.h>
int input()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    return n;
}
int add(int a,int b)
{
    int sum;
    sum = a+b;
}
void output(int a,int b,int sum)
{
    printf("the sum of %d and %d is %d",a,b,sum);
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