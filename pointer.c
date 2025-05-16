#include<stdio.h>
int main(){
 int b = 5;
 int *a =&b;
 *a = *a+10;
 printf("a = %d\n",b);
 printf("bharath = %d\n",*a);
 return 0;
}
