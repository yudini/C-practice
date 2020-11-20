#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node node;
node *head =NULL, *tail=NULL, *temp=NULL;

void insert(int);
void delete();
void print_queue();
void release();
int main()
{
    int x,d;
    do{
        printf("Queue ---1.���� 2.����, 3.���,0.�� \n Input: ");
        scanf("%d",&x);
        switch(x){
        case 1:
            printf("\n������ �Է�: ");
            scanf("%d",&d);
            insert(d);
            break;
        case 2:
            delete();
            break;
        case 3:
            print_queue();
            break;
        case 0:
            release();
            return 0;
        }
        printf("\n\n");
    }while(1);
}

void insert(int x){
    temp=malloc(sizeof(struct node));
    temp ->data=x;
    temp ->next=NULL;
    if(tail !=NULL)
        tail ->next=temp;
    tail =temp;
    if(head ==NULL)
        head=temp;

    printf("\n%d�� ���ԵǾ����ϴ�. \n",x);
    print_queue();
    return;
}

void delete(){
    int x;
    if(head==NULL){
        printf("\nQueue is empty!!!\n");
        return;
    }
    temp =head;
    head=head ->next;
    if(!head)
        tail =NULL;
    x=temp->data;
    free(temp);
    printf("%d�� �����Ǿ����ϴ�.\n",x);
    print_queue();
    return;
}

void print_queue(){
    if(head==NULL){
        printf("Queue is empty!\n");
        return;
    }
    temp=head;
    printf("���� ť�� ����(Head...Tail):");
    while(temp){
        printf("%d",temp->data);
        temp =temp->next;
    }
    return;
}

void release(){
    while(head){
        temp =head;
        head=head->next;
        free(temp);
    }
}
