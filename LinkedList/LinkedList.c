#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *head =NULL;

void insert(struct node *);
void print(struct node *);
void release(struct node*);
int main()
{
    int x;
    struct node *temp=NULL;

    printf("���� ���� �Է��ϸ� ���α׷� ����: \n");
    while(1){
        printf("���� ������ �Է�: ");
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
    pritnf("\n���ĵ� ������\n");
    print(head);
    printf("�����Ͱ� �����˴ϴ�. \n");
    release(head);
}

void insert(struct node*t){
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
            }else if(pos->data>=t->data&&pos->link->data<t->data){
                t->link =pos->link;
                pos->link=t;
                break;
            }else
                pos = pos->link;
        }
    }
}

void print(struct node *h) {
        while(h){
                printf("%d",h->data);
                h=h->link;
        }
        printf("\n");
}

void release(struct node*c){
        struct node *tmp;
        while(c){
                tmp=c;
                c=c->link;
                free(tmp);
        }
}

