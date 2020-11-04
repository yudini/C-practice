#include <stdio.h>

int MaxNum(int num1,int num2,int num3)
{
    if(num1>num2)
        return (num1>num3) ? num1:num3;
    else
        return (num2>num3) ? num2:num3;
}

int MinNum(int num1,int num2,int num3)
{
    if(num1>num2)
        return (num2>num3) ? num3:num2;
    else
        return (num1>num3) ? num3:num1;
}

int main(void)
{
    int num1,num2,num3;
    printf("세 정수 입력:  ");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("가장 큰 수: %d \n", MaxNum(num1,num2,num3));
    printf("가장 작은 수: %d \n", MinNum(num1,num2,num3));
    return 0;
}
