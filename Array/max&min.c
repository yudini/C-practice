#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[5];
   int i,min,max,sum;

   for(i=0;i<5;i++){
        printf("Á¤¼ö ÀÔ·Â: ");
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
   printf("ÃÖ´ñ°ª:%d \n",max);
   printf("ÃÖ¼Ú°ª: %d \n",min);
   printf("Á¤¼ö ÃÑ ÇÕ: %d \n",sum);
   return 0;
}
