# include<stdio.h>
int main(){
    int num,i,isprime=1;
    printf("enter the num starting from posiive 2");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%2==0){
            printf("its not a prime\n");        
        }
        else{
            printf("its a prime\n");
        }
    }
}
