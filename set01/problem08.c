#include<stdio.h>
int input_array_size()
{
    int n;
    printf("enter array size: ");
    scanf("%d",&n);
    return 0;
}
void input_array(int n,int a[n])
{
    printf("enter array elements: ");
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
int sum_n_array(int n,int a[n]){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum+a[i];
    }
    return sum;
}
void output(int n,int a[n],int sum)
{
    printf("sum of ");
    for(int i = 0;i<n;i++){
        printf("%d",a[i]);
        if(i<n - 1){
            printf("+");
        }
    }
    printf("is %d\n",sum);
}

int main()
{
   int size = input_array_size();
   int array[size];
   printf("input the array: ");
   input_array(size,array);
   int totalsum = sum_n_array(size,array);
   output(size,array,totalsum);
   return 0;
}
