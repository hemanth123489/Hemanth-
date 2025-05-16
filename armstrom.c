#include <stdio.h>
int  main(){
    int num,rem,original,result=0;
    printf("enter the number int");
    scanf("%d",&num);
    original =num;

    while(num!=0){
        rem=num%10;
        result+= rem*rem*rem;
        num/=10;
    }
    if(result==original){
        printf("%d is armstrom.\n",original);
    }
    else{
        printf("%d is armstorm.\n",original);
    }
    }
    
