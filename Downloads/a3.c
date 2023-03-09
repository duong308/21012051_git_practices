#include<stdio.h> 
#include<stdlib.h>
typedef struct _btnode2{
	int item;
	struct _btnode2 *left;
	struct _btnode2 *right;
} BTNode2;
struct _btnode2 **t=NULL;
int lastLeftChild(BTNode2 **t)
{
	int k;
    if ((*t)->left == NULL){
    	k=(*t)-> item;
    	k= (*t)->left;
    	return k;
	}
	else return lastLeftChild(((*t)->left));
}
void removeNode(BTNode2 **t, int num){
	
	if((*t)->item > num){
		removeNode(&((*t)->left),num);
	}                       
	else if((*t)->item < num){
		removeNode(&((*t)->right),num);
	}
	else{
		if((*t)->left == NULL){
			(*t)=(*t)->right;
		}
		else if((*t)->right == NULL){
			(*t)=(*t)->left;
		}
		else {
			BTNode2 *p = lastLeftChild(((*t)->right));
			(*t)->item = p->item;
			removeNode(&((*t)->right), p->item);
		}                             
	}
	
}
void TreeTraversal_PreOrder(BTNode2 *t){
	if((t) != NULL){
	printf("%d ", (t)->item);
	TreeTraversal_PreOrder((t)->left);
	TreeTraversal_PreOrder((t)->right);
}
}
int main(void) {
    BTNode2 **Head = NULL,*btnodeA, *btnodeB, *btnodeC, *btnodeD, *btnodeE, *btnodeF, *btnodeG, *btnodeH, *btnodeI, *btnodeJ, *btnodeK, *btnodeL, *btnodeM;
    btnodeA = malloc(sizeof(BTNode2));
    btnodeB = malloc(sizeof(BTNode2));
    btnodeC = malloc(sizeof(BTNode2));
    btnodeD = malloc(sizeof(BTNode2));
    btnodeE = malloc(sizeof(BTNode2));
    btnodeF = malloc(sizeof(BTNode2));
    btnodeG = malloc(sizeof(BTNode2));
    btnodeH = malloc(sizeof(BTNode2));
    btnodeI = malloc(sizeof(BTNode2));
    btnodeJ = malloc(sizeof(BTNode2));
    btnodeK = malloc(sizeof(BTNode2));
    btnodeL = malloc(sizeof(BTNode2));
    btnodeM = malloc(sizeof(BTNode2));

    btnodeA->item=1;
    btnodeB->item=2;
    btnodeC->item=3;
    btnodeD->item=4;
    btnodeE->item=5;
    btnodeF->item=6;
    btnodeG->item=7;
    btnodeH->item=8;
    btnodeI->item=9;
    btnodeJ->item=10;
    btnodeK->item=11;
    btnodeL->item=12;
    btnodeM->item=13;

    btnodeA->left=NULL;
    btnodeA->right=NULL;

    btnodeB->left=btnodeA;
    btnodeB->right=btnodeC;

    btnodeC->left=NULL;
    btnodeC->right=btnodeD;


    btnodeD->left=NULL;
    btnodeD->right=NULL;

    btnodeE->left=btnodeB;
    btnodeE->right=btnodeF;

    btnodeF->left=NULL;
    btnodeF->right=btnodeG;

    btnodeG->left=NULL;
    btnodeG->right=NULL;

    btnodeH->left=btnodeE;
    btnodeH->right=btnodeL;

    btnodeI->left=NULL;
    btnodeI->right=NULL;

    btnodeJ->left=btnodeI;
    btnodeJ->right=btnodeK;

    btnodeK->left=NULL;
    btnodeK->right=NULL;

    btnodeL->left=btnodeJ;
    btnodeL->right=btnodeM;

    btnodeM->left=NULL;
    btnodeM->right=NULL;
    
    TreeTraversal_PreOrder(btnodeH);
    int num;
    printf("\nnhap num: ");
    scanf("%d",&num);
    Head = &btnodeH;
    removeNode(Head,num);
    printf("in theo tien thu tu: ");
    TreeTraversal_PreOrder(btnodeH);
}               
