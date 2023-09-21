void CreateList_L(LinkList &L,int n)
{
	LinkList p;
	int i;
	L=(LinkList)malloc(sizeof(LNode));
	L->next=NULL;
	for(i=n;i>0;--i)
	{
		p=(LinkList)malloc(sizeof(LNode));
		p->data=random(200);
		p->next=L->next;
		L->next=p;
	}
}
void CreateList_L(LinkList &L,int n)
{
	LinkList p;
	int i;
	L=(LinkList)malloc(sizeof(LNode));
	L->next=NULL;
	p=L;
	for(i=n;i>0;--i)
	{
		p->next=(LinkList)malloc(sizeof(LNode));
		p->next->data=random(200);
		p->next->next=NULL;
		p=p->next; 
	}
}
