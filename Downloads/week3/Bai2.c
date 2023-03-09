#include <stdio.h>
#include <stdlib.h>

typedef struct _listnode{
	int num;
	struct _listnode *next;
} ListNode;

void printList(ListNode *head){
ListNode *cur=head;
if (cur== NULL) return;
while (cur!= NULL){
    printf("\n%d", cur ->num);
    cur = cur ->next;
    }
}
 
int main(void){
	int n;
	int i;
    ListNode *node0, *head; 
    printf("So phan tu: "); 
    scanf("%d", &n);
	if(n>0){
        node0 = malloc(sizeof(ListNode));
        head = node0;
        printf("cac phan tu: \n");
        for (i=1; i<n; i++) {
    	    scanf("%d", &node0->num);
    	    node0->next=malloc(sizeof(ListNode));
    	    node0=node0->next;
	    }    
    scanf("%d", &node0->num);
    node0->next=NULL;
    printList(head);
    }
}

