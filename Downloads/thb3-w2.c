#include <stdio.h>
#include<stdlib.h>

typedef struct _listnode {
   int num;
   struct _listnode *next, *pdau, *pcuoi;
} ListNode;

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

void createLinkedList(ListNode **pHead, int n)
{
	int i;
	ListNode *a;
	a=malloc(sizeof(ListNode));
	*pHead=a;
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

void reverseLinkedList(ListNode **pHead)
{
	ListNode *a, *b=NULL, *tiep=NULL;
	a=*pHead;
	while (a != NULL) {
        tiep = a->next;
        a->next = b;
        b = a;
        a = tiep;
    }
    *pHead = b; 
}

int main()
{
	int n;
	ListNode **ptHead=NULL, *head;
	ptHead=&head;
	printf("nhap so phan tu:");
	scanf("%d",&n);
	createLinkedList(ptHead, n);
	printf("danh sach la:\n");
	printList(head);
	printf("danh sach dao la:\n");
	reverseLinkedList(ptHead);
	printList(head);
}
