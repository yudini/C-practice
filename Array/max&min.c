#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[5];
   int i,min,max,sum;

   for(i=0;i<5;i++){
        printf("���� �Է�: ");
        scanf("%d",&arr[i]);
   }
   min=max=sum=arr[0];
   for(i=1;i<5;i++){
    sum+=arr[i];
    if(max<arr[i])
        max=arr[i];
    if(min>arr[i])
        min=arr[i];
   }
   printf("�ִ�:%d \n",max);
   printf("�ּڰ�: %d \n",min);
   printf("���� �� ��: %d \n",sum);
   return 0;
}
