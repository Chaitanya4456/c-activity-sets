#include<stdio.h>
int input_n()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    return n;
}
int sum_n_nos(int n)
{
    int sum = 0;
    for(int i = 1;i<=n;i++)
    {
        sum = sum+i;
    }
    return sum;
}
void output(int n,int sum)
{
    printf("the sum of %d natural numbers is %d",n,sum);
}
int main()
{
    int n;
    n = input_n();
    int sum = sum_n_nos(n);
    output(n,sum);
    return 0;
}


