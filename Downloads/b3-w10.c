#include<stdio.h>

struct ListNode{
	int num;
	ListNode *next;
};

struct Linkedlist{
	ListNode *head;
	int size;
};

struct Queue{
	LinkedList ll;
};

ListNode *findnode(ListNode *head, int i)
{
	ListNode *cur=head;
	if(head==NULL || i<0) return;
	if(i==0) return head;
	while(i>0)
	{
		cur=cur->next;
		if(cur==NULL) return NULL;
		i--;
	}
	return cur;
}

void insertNode(ListNode *ptrHead, int i, int v)
{
	ListNode *cur, *newnode;
	if(*ptrHead==NULL || i==0)
	{
		newnode=malloc(sizeof(ListNode));
		newnode->num=v;
		newnode->next=*ptrHead;
		*ptrHead=newnode;
	}
	else
	{
		if((cur=findnode(*ptrHead,i-1))!=NULL)
		{
			newnode=malloc(sizeof(ListNode));
			newnode->num=v;
			newnode->next=cur->next;
			cur->next=newnode;
		}else printf("ko tim dc.");
	}
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

void enqueue(Queue *q, int item) 
{
	insertNode(&(q->ll.head), q->ll.size, item);
}

void dequeue(Queue *q)
{
	int i;
	if(q->ll.head!=NULL)
	{
		i=q->ll.head->num;
		removeNode(&(q->ll),0);
		(q->ll).size--;
		return i;
	}else return NULL;
}

void readData(char* filename, int G[MAX][MAX], int* pn, int* psource) {
    FILE* file = fopen (filename, "r");
    int i, j;
    if (file != NULL) {
        fscanf (file,"id %d",pn, psource);
        for (i = 0; i < *pn; i++)
            for (j = i+1; j < *pn; j++)
                fscanf(file, "id", &G[i][j]);
    }
    fclose (file);
}

void breadthFistSearch(int g[MAX][MAX], int n, int source)
{
    int visited[MAX];
    int i,cur;
    Queue *q=malloc(sizeof(Queue));
    q->ll.size=0;
    q->ll.head=NULL;
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    cur=source;
    visited[cur]=1;
    enqueue(q,cur);
     while(!isEmptyQueue(q)){
        cur=dequeue(q);
        printf(", %d", cur);
         for (i = ___; i < ___; i++)
            if (g[cur][i] != ___ && visited[i] == ___) {
                visited[i] = ___;
                enqueue(q, ___);
            }
    }
}
