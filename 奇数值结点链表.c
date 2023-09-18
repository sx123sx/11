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
                *L=heven=p;//将当前节点设置为奇数链表的头部。
                taile=p;//同时，因为这是奇数链表的第一个节点，所以也将其设置为尾部。
                p=p->next;//更新 p 为原链表的下一个节点，以便继续遍历。
                taile->next=NULL;//确保新链表的尾部节点的 next 指针是 NULL。
            }
            else{
                taile->next=p;//将当前节点添加到奇数链表的尾部。
                taile=taile->next;//更新 tailo 为奇数链表的新尾部节点。
                p=p->next;//更新 p 为原链表的下一个节点，以便继续遍历。
                taile->next=NULL;//确保新链表的尾部节点的 next 指针是 NULL。
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
