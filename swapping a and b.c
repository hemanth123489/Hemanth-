#include<stdio.h>
int main()
{
    int a,b;
    printf("Hi Hemanth!\n");
    printf("enter the values of a and b:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swapping result :\n");
    printf("a is:%d\nb is:%d\n",a,b);
    return 0;
}
