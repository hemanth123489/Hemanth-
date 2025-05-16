#include<stdio.h>
int main(){
    int age;
    char name [10],location[20];
    printf("enter you name:");
    scanf("%s",&name);
    printf("enter the you age:");
    scanf("%d" ,& age);
    printf("enter yoy location:");
    scanf("%s",&location);
    printf("\nname:\tage:\tlocation:\n");
    printf("%s\t%d\t %s\n",name,age,location);
    return 0;
}
