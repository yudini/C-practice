#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *head =NULL;

void insert(struct node *);
void print(struct node *);
void release(struct nod*);
int main()
{
    int x;
    struct node *temp=NULL;

    printf("음수 값을 입려하면 프로그램 종료: \n");
    while(1){
        printf("정수 데이터 입력: ");
        scanf("%d",&x);
        if(x<0)
            break;
        else{
            temp = malloc(sizeof(struct node));
            temp->data=x;
            temp->link=NULL;
        }
        insert(temp);
    }
    pritnf("\n정렬된 데이터\n");
    print(head);
    printf("데이터가 삭제됩니다. \n");
    release(head);
}

void insert(struct nod*t){
    struct node *pos;
    if(head ==NULL)
        head =t;
    else if(head->link==NULL){
        if(head->data > t->data)
            head->link=t;
        else{
            t->link=head;
            head=t;
        }
    }
    else{
        pos=head;
        while(pos){
            if(pos ==head&&pos->data<=t->data){
                t->link=head;
                head=t;
                break;
            }else if(pos->link==NULL&&pos->data>=t->data){
                pos->link=t;
                break;
            }else if(pos->data>=t->dat&&pos->link->data<t->data){
                t->link =pos->link;
                pos->link=t;
                break;
            }else
                pos = pos->link;
        }
    }
}
