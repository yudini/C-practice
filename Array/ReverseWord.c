#include <stdio.h>
#include <stdlib.h>

int main()
{
    char voca[100];
    int i;
    int len =0;
    char temp;
    printf("���ܾ� �Է�: ");
    scanf("%s",voca);

    while(voca[len] != 0){
        len++;
    }
    for(i=0;i<len/2;i++){
        temp=voca[i];
        voca[i]=voca[(len-i)-1];
        voca[(len-i)-1]=temp;
    }
    printf("������ ���ܾ�: %s \n",voca);
    return 0;
}
