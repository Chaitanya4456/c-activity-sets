#include<stdio.h>


   void input(int *b,int *c)
  {
    printf("enter first number: ");
    scanf("%d",b);
    printf("enter second number: ");
    scanf("%d",b);
    
  }

void add(int a,int b,int *sum)
{
    *sum = a+b;
}
void output(int a,int b,int sum)
{
    printf("the sum of %d and %d is %d",a,b,sum);
}

int main()
{
    int a,b,sum;
    input(&a,&b);
    add(a,b,&sum);
    output(a,b,sum);
    return 0;
}
