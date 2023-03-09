#include<stdio.h>
#include<stdlib.h>
#define COUNT 10
typedef struct _btnode{
	int item;
	struct _btnode *left;
	struct _btnode *right;
} BTNode;

struct _btnode *cur = NULL;

void insert(BTNode *cur, int n){
	BTNode *temnode, *current, *bome;
	temnode = malloc(sizeof(BTNode));
	temnode->item = n;
	temnode->left = NULL;
	temnode->right = NULL;
	current = cur;
	bome = NULL;
	while(1){
		bome = current;
		if(n<bome->item){
			current = current->left;
			if(current == NULL){
				bome->left = temnode;
				return;
		}
	}
		else{
			current = current->right;
			if(current == NULL){
				bome->right = temnode;
				return;
			}
		}
	}
}

void printtree(BTNode *cur){
    if(cur != NULL){
	printtree(cur->left);
	printf("%d ", cur->item);
	printtree(cur->right);
}
}

int main(){
	int item1 = 8, item2 = 4, item3 = 9, item4 = 2,item5 = 6;
	BTNode *btnode1,*btnode2,*btnode3,*btnode4,*btnode5;
	btnode1 = malloc(sizeof(BTNode));
    btnode2 = malloc(sizeof(BTNode));
    btnode3 = malloc(sizeof(BTNode));
    btnode4 = malloc(sizeof(BTNode));
    btnode5 = malloc(sizeof(BTNode));
	
	btnode1->item = item1;
    btnode2->item = item2;
    btnode3->item = item3;
    btnode4->item = item4;
    btnode5->item = item5;
    
    btnode1->left = btnode2;
    btnode1->right = btnode3;
    
    btnode2->left = btnode4;
    btnode2->right = btnode5;
    
    btnode3->left = NULL;
    btnode3->right = NULL;
    
    btnode4->left = NULL;
    btnode4->right = NULL;
    
    btnode5->left = NULL;
    btnode5->right = NULL;
    printf("chen gia tri 1: ");
    insert(btnode1,1);
    printtree(btnode1);
    printf("\nchen gia tri 3: ");
    insert(btnode1,3);
    printtree(btnode1);
    printf("\nchen gia tri 5: ");
    insert(btnode1,5);
    printtree(btnode1);
    printf("\nchen gia tri 7: ");
    insert(btnode1,7);
    printtree(btnode1);
}

