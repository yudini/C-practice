#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,i,j;
    int sum=0;
    scanf("%d",&n);


    for(i=0;5*i<=n;i++){
        for(j=0;5*i+3*j<=n;j++){
            if(5*i+3*j==n)
                sum=i+j;
        }
    }
    if(sum==0)
        sum=-1;
    printf("%d",sum);
/*
    int m=n;

    if(n%3==0){
        k=n/5;
        n%=5;
        if(n%3==0)
            k+=n/3;
        else
            k=m/3;
    }
    else{
        k=n/5;
        n=n%5;
        if(n%3==0)
            k+=n/3;
        else
            k=-1;
    }

    printf("%d",k);*/
    return 0;
}
