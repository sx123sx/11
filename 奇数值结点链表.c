#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd( struct ListNode **L );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}
#include <stdbool.h> 
struct ListNode *readlist()
{
	struct ListNode *header=malloc(sizeof(struct ListNode));
	struct ListNode *pRear=header;
	header->data=-1;
	header->next=NULL;
	int val=-1;
	while(true) 
	{
		scanf("%d",&val);
		if(val==-1)
		{
			break;
		}
		struct ListNode *newnode=malloc(sizeof(struct ListNode));
		newnode->data=val;
		newnode->next=NULL;
		pRear->next=newnode;
		pRear=newnode;
	}
	return header->next;
}

struct ListNode *getodd( struct ListNode **L ){
    struct ListNode *p=*L,*hodd=NULL,*heven=NULL,*tailo=NULL,*taile=NULL;
    *L=NULL;
    while(p!=NULL){
        if(p->data%2==0){
            if(heven==NULL){
                *L=heven=p;//����ǰ�ڵ�����Ϊ���������ͷ����
                taile=p;//ͬʱ����Ϊ������������ĵ�һ���ڵ㣬����Ҳ��������Ϊβ����
                p=p->next;//���� p Ϊԭ�������һ���ڵ㣬�Ա����������
                taile->next=NULL;//ȷ���������β���ڵ�� next ָ���� NULL��
            }
            else{
                taile->next=p;//����ǰ�ڵ���ӵ����������β����
                taile=taile->next;//���� tailo Ϊ�����������β���ڵ㡣
                p=p->next;//���� p Ϊԭ�������һ���ڵ㣬�Ա����������
                taile->next=NULL;//ȷ���������β���ڵ�� next ָ���� NULL��
            }
        }
        else{
            if(hodd==NULL){
                hodd=p;
                tailo=p;
                p=p->next;
                tailo->next=NULL;
            }
            else{
                tailo->next=p;
                tailo=tailo->next;
                p=p->next;
                tailo->next=NULL;
            }
        }
    }
    return hodd;
}
