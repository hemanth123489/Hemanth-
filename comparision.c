#include<stdio.h>
#include<string.h>
int main(){
    char name [15];
    printf("enter the name:");
    scanf("%s",&name);
    printf("your name is %s\n",name);
    int length = strlen(name);
    printf("%d\n",length);
    strcpy(name,"hemanth");
    int comparision =strcmp("hemanth","hema");
    printf("%d\n",comparision);
    strcat(name,"coder");
    printf("%s\n",name);
}
