#include <stdio.h>
#include <stdlib.h>

typedef struct _listnode{
	int num;
	struct _listnode *next;
} ListNode;

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

int main(void) {
	ListNode *node0, *node1, *head;
	node0 = malloc(sizeof(ListNode));
	node1 = malloc(sizeof(ListNode));
	node0->num = 20;
	node1->num = 30;
	node0->next = node1;
	node1->next = NULL;
	head = node0;
	printList(head);
	
	
}
