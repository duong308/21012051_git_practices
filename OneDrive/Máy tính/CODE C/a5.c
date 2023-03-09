#include<stdio.h>
#include<stdlib.h>

typedef struct _btnode {
    int item;
    struct _btnode *left;
    struct _btnode *right;
} BTNode;

void buildTree(BTNode *r, int v, int h) {
    r->item=v;
    if (h>0) {
        r->left=malloc(sizeof(BTNode));
        r->right=malloc(sizeof(BTNode));
        buildTree(r->left, v-h, h/2);
        buildTree(r->right, v+h, h/2);
    } else {
        r->left =NULL;
        r->right =NULL;
    }
    return;
}

void main() {
int i; 
BTNode root, *cur;
printf("0 = dung\n-1 = qua lon\n1 = qua nho\n");
buildTree(&root, 8, 4); 
cur=&root;
do { 
    printf("Co phai so %d?\n", cur->item);
    scanf("%d", &i); 
    if (i==-1) 
        cur=cur->left;
    else if (i==1)
        cur=cur->right;
} while (i!=0 && cur!=NULL);
if (i==0) printf("Ket qua la %d\n", cur->item);
}
