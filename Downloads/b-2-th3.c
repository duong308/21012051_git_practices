#include<stdio.h>
#include<stdlib.h>

typedef struct _listnode{
	int num;
	struct _listnote *next;
} ListNode;

typedef struct _linkedlist{
	ListNode *head;
	int size;
}LinkedList;

typedef struct _stack{
	LinkedList ll;
}Stack;

void printList(ListNode *head)
{
	ListNode *a=head;
	if(a==NULL)
	{
		printf("Danh sach lien ket khong co phan tu nao\n");
		return;
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

void push(Stack *s, int item ) 
{
    insertNode( &(s->ll.head), 0, item);
    s->ll.size = s->ll.size + 1;
}

int isEmptyStack(Stack *s)
{
	if((s->ll).size==NULL) return 1;
	return 0;
}

int pop(Stack *s) {
    int item;
    if (!isEmptyStack(s)) {
        item =((s->ll).head)->num ;
        removeNode( &(s->ll),0 );
        (s->ll).size = (s->ll).size - 1;
        return item;
    }
    else { printf("Ngan xep rong");
		return NULL;
	}
}

int peek(Stack *s) {
    if (((s->ll).head)!=NULL)
        return ((s->ll).head)->num	 ;
    else { 
		printf("Ngan xep rong");
		return NULL;
	}
}

int main() 
{
	int n,i;
	ListNode *a, *head;
	Stack *s = malloc(sizeof(Stack));
    s->ll.size = 0;
    s->ll.head= NULL;
    
    printf("kiem tra xem rong khong:");
    isEmptyStack(&head);
    printf("%d\n",isEmptyStack(&head));
    
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
	
	printf("push\n");
    push(&head, 10 );
    printList(head);
    
    printf("pop\n");
    printf("%d\n",pop(&head));
    
    printf("peak\n");
    printf("%d",peek(&head));
}
