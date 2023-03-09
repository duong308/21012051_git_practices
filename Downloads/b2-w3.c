#include<stdio.h>
#include<stdlib.h>

typedef struct _listnode {
   int num;
   struct _listnode *next;
} ListNode;

void xuatda(ListNode *head,int n)
{
	int i;
	ListNode *a=head;
	for(i=0;i<n;i++)
	{
		printf("%d\n", a -> num);
		a=a->next;
	}
}
int main()
{
	int n,i;
	ListNode *a, *head;
	printf("so phan tu la:");
	scanf("%d", &n);
	if(n>0)
	{
		a=malloc(sizeof(ListNode));
		head=a;
		printf("cac phan tu nhap vao la:");
		for (i=1; i<n; i++)
		{
			scanf("%d", &a->num);
			a->next=malloc(sizeof(ListNode));
			a=a->next;
		}	
		scanf("%d", &a->num); 
		a->next=NULL;
		xuatda(head,n);
	}
}
