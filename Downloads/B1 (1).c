#include <stdio.h>
#include <stdlib.h>

typedef struct _listnode {
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

ListNode *findNode(ListNode *head, int i){
	ListNode *cur=head; 
    if (head==NULL || i<0) {
    	printf("Danh sach lien ket rong hoac phan tu tim kiem khong ton tai");
        return NULL;
	}
    if (i == 0) return head;
    while(i>0){
        cur=cur->next;
        i--;
        if (cur==NULL) {
        	printf("Phan tu tim kiem khong ton tai");
            return NULL;
		}
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

int main(void){
    ListNode *node0, *node1, *head, *f, **pHead=NULL, **ptrHead;
    node0 = malloc(sizeof(ListNode));
    node1 = malloc(sizeof(ListNode));
	node0->num = 20;
    node1->num = 30;
    node0->next = node1;
	node1->next = NULL;
    head = node0;
    printf("Danh sach gom: \n");
    printList(head);
    
	int x, y, z, g;
    printf("\nfind\n") ;
	printf("Nhap vi tri phan tu: ");
    scanf("%d",&x);
   	f=findNode( head, x);
   	printf("%d\n",f->num);
    
	printf("\ninsert\n") ;
    pHead=&head;
    printf("Nhap vi tri can chen: ");
    scanf("%d",&y);
    printf("Nhap gia tri chen vao: ");
    scanf("%d",&z);
    insertNode(pHead,y,z);
    printf("Danh sach khi chen gom: \n");
    printList(head);

    printf("\nremove\n");
    ptrHead=&head;
    printf("Nhap vi tri can xoa: ");
    scanf("%d",&g);
    removeNode(ptrHead,g);
    printf("Danh sach sau xoa: \n");
    printList(head);
    
}





