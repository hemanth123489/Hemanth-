#include<stdio.h>
int main(){
    char name[10];
    printf("enter you name:");
    fgets(name,10,stdin);
    printf("you name=%s",name);
}
