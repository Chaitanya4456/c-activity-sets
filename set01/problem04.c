#include<stdio.h>

   void input(int *a,int *b)
  {
    printf("enter first number: ");
    scanf("%d",a);
    printf("enter second number: ");
    scanf("%d",b);
    
  }

void add(int a,int b,int *sum)
{
    *sum = a+b;
}
void output(int p,int b,int sum)
{
    printf("the sum of %d and %d is %d",p,b,sum);
}

int main()
{
    int a,b,sum;
    input(&a,&b);
    add(a,b,&sum);
    output(a,b,sum);
    return 0;
}
