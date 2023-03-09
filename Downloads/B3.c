#include <stdio.h>
#include <stdlib.h>

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

void printList(ListNode *head){
	ListNode *cur=head;
    if (cur== NULL){
	    printf("Danh sach lien ket khong co phan tu nao");
    }
    while (cur!= NULL){
        printf("%d\n", cur ->num);
        cur = cur ->next;
    }
}

ListNode* findNode(ListNode *head, int i){
	ListNode *cur=head;
	if(head==NULL||i<0) {
		return NULL;
	}
	while(i>0){
		cur=cur->next;
		if(cur==NULL)
		{
		    return NULL;
		} 
		i--;
	}
	return cur;
}

void insertNode(ListNode **pHead, int index, int value){
	ListNode *cur, *newNode;
    if (*pHead == NULL || index == 0 ){
        newNode = malloc(sizeof(ListNode));
        newNode->num = value;
        newNode->next = *pHead;
        *pHead = newNode;
    }
    else if ((cur = findNode(*pHead, index-1)) != NULL){
        newNode = malloc(sizeof(ListNode));
        newNode->num = value;
        newNode->next = cur->next;
        cur->next = newNode;
    } else printf("can not insert the new item at index %d!\n", index);
}

void removeNode(ListNode **ptrHead, int index){
	ListNode *cur, *pre;
    if (index == 0 ) {
        cur = *ptrHead;
        *ptrHead = cur->next;
        free(cur);
    } else {
        pre = findNode(*ptrHead, index-1);
        cur = pre->next ;
        pre->next = cur->next;
        free(cur);
    }
}
    
void enqueue(Queue *q, int item){
        insertNode(q->ll.head, q->ll.size, item);
        q->ll.size = q->ll.size + 1;
}

int dequeue(Queue *q){
	int item;
    if (q->ll.head != NULL) {
        item = ((q->ll).head)->num ;
        removeNode(&(q->ll).head, 0);
        (q->ll).size = (q->ll).size - 1;
        return item;
    }
    else { 
        printf("Hang doi rong");
        return 0;
    }
}

int peek(Queue *q){
	if ((q->ll).head!=NULL){
        return (q->ll).head->num;
    } else{ 
        printf("Hang doi rong");
        return 0;
    }
}

int isEmptyQueue(Queue *q){
	if ((q->ll).size == 0) return 1;
    return 0;
}

int main() {
	int i,n,x,y,z;
	ListNode *head,*a;
	Queue *q = malloc(sizeof(Queue));
    q->ll.size = 0;
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
    enqueue(&head,2);
    printList(head);
    
    printf("dequeue\n");
    printf("%d\n",dequeue(&head));
    
    printf("peak\n");
    printf("%d",peek(&head));
}
