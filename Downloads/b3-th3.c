#include<stdio.h>
#include<stdlib.h>
typedef struct _listnode {
    int num;
    struct _listnode *next;
} ListNode;

typedef struct _linkedlist { 
    ListNode *head;
    int size;
} LinkedList;

typedef struct _queue { 
    LinkedList ll;
} Queue;

void printList(ListNode *head)
{
	ListNode *a=head;
	if(a==NULL)
	{
		printf("Danh sach lien ket khong co phan tu nao\n");
	}
	while(a!=NULL)
	{
		printf("%d\t",a->num);
		a=a->next; 
	} 
	printf("\n");
}

ListNode *findNode(ListNode *head, int i)
{
	ListNode *cur=head;
	if(head==NULL||i<0) 
	{
		printf("Danh sach lien ket rong hoac phan tu tim kiem khong ton tai\n");
		return NULL;
	}
	while(i>0)
	{
		cur=cur->next;
		if(cur==NULL)
		{
			 printf("Phan tu tim kiem khong ton tai\n");	
			 return NULL;
		} 
		i--;
	}
	return cur;
}

void insertNode(ListNode **pHead, int index, int value)
{
	ListNode *cur, *newNode;
	if (*pHead == NULL || index == 0 )
	{
        newNode = malloc(sizeof(ListNode));
		newNode->num = value;
        newNode->next = *pHead;
        *pHead = newNode;
	}
    else if ((cur = findNode(*pHead, index-1 )) != NULL)
    {
        newNode = malloc(sizeof(ListNode));
        newNode->num = value;
        newNode->next = cur->next;
        cur->next =newNode ;
	}else printf("can not insert the new item at index %d!\n", index);
}

void removeNode(ListNode **ptrHead, int index){
    ListNode *cur, *pre;
    if (index == 0 	) {
        cur =  *ptrHead ;
        *ptrHead = cur->next ;
        free(cur);
    } else {
        pre = findNode( *ptrHead , index-1 );
        cur = pre->next ;
        pre->next = cur->next ;
        free(cur);
    }
}

void enqueue(Queue *q, int n, int item) {
    insertNode(&(q->ll.head),n+1, item);
    q->ll.size =q->ll.size + 1;
}

int dequeue(Queue *q)
{
	int item;
	if(q->ll.head!=NULL)
	{
		item=q->ll.head->num;
		removeNode(&(q->ll).head,0);
		q->ll.size = q->ll.size - 1;
		return item;
	}
	else{
		printf("hang doi rong");
		return 0;
	}
}

int peek(Queue *q)
{
	if(q->ll.head!=NULL)
	{
		return q->ll.head->num;
	}else{
		printf("hang doi rong");
		return 0;
	}
}

int isEmptyStack(Queue *q)
{
	if((q->ll).size==0) return 1;
	return 0;
}

int main()
{
	ListNode *head,*a;
	Queue *q = malloc(sizeof(Queue));
	int i,n,x,y,z;
    q->ll.size = 0 ;
    q->ll.head= NULL;
    
    printf("so chi so la:");
	scanf("%d", &n);
	a=malloc(sizeof(ListNode));
	head=a;
	for (i=0; i<n; i++)
	{
		printf("phan tu chi so %d la:", i);
		scanf("%d", &a->num);
		a->next=malloc(sizeof(ListNode));
		a=a->next;
		a->next=NULL;
	}	
	printf("phan tu chi so %d la:", n);
	scanf("%d", &a->num);
	a->next=NULL;
	printf("Danh sach gom\n");
	printList(head);
	
	printf("enqueue\n");
    enqueue(&head,n);
    printList(head);
    
    printf("dequeue\n");
    printf("%d\n",dequeue(&head));
    
    printf("peak\n");
    printf("%d",peek(&head));
}
