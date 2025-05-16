# include<stdio.h>
int main(){
    struct hemanth{
        char name [50];
        int roll;
        float marks;
    };
    struct hemanth s1;
    printf("enter the name:");
    scanf("%s",&s1.name);
    printf("enter the roll number:");
    scanf("%s",&s1.roll);
    printf("enter the marks:");
    scanf("%f",&s1.marks);
    printf("\n student details:\n");
    printf("name :%s\nroll:%f\nmarks:%2s\n",s1.name,s1.roll,s1.marks);
    return 0;
}
