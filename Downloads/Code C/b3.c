#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct _btnode{
	int item;
	struct _btnode *left, *right;
}BTNode;

void TreeTraversal_InOrder2(BTNode *cur) {
    if(cur==NULL) return;
    TreeTraversal_InOrder2(cur->left);
    printf("%d ",cur->item);
    TreeTraversal_InOrder2(cur->right);
}

int max(int m, int n) 
{
	if(m==n) return m;
	else
	{
		if(m>n) return m;
		else return n;
	}
}

int checkalv(BTNode *cur)
{
	if(cur==NULL) return -1;
	int l, r, k;
	l=checkalv(cur->left);
	r=checkalv(cur->right);
	k= max(l,r)+1;
	return k;
}

int main()
{
	int l,r,x;
	BTNode *btnodeA, *btnodeB, *btnodeC, *btnodeD, *btnodeE, *btnodeF, *btnodeG, *btnodeH;
    btnodeA = malloc(sizeof(BTNode));
    btnodeB = malloc(sizeof(BTNode));
    btnodeC = malloc(sizeof(BTNode));
    btnodeD = malloc(sizeof(BTNode));
    btnodeE = malloc(sizeof(BTNode));
    btnodeF = malloc(sizeof(BTNode));
    btnodeG = malloc(sizeof(BTNode));
    btnodeH = malloc(sizeof(BTNode));

    btnodeA->item=2;
    btnodeB->item=5;
    btnodeC->item=7;
    btnodeD->item=8;
    btnodeE->item=9;
    btnodeF->item=10;
    btnodeG->item=11;
    btnodeH->item=12;    

    btnodeA->left=NULL;
    btnodeA->right=NULL;

    btnodeB->left=btnodeA;
    btnodeB->right=btnodeC;

    btnodeC->left=NULL;
    btnodeC->right=NULL;

    btnodeD->left=btnodeB;
    btnodeD->right=btnodeE;

    btnodeE->left=NULL;
    btnodeE->right=btnodeF;

    btnodeF->left=NULL;
    btnodeF->right=btnodeG;

    btnodeG->left=NULL;
    btnodeG->right=btnodeH;

    btnodeH->left=NULL;
    btnodeH->right=NULL;

    TreeTraversal_InOrder2(btnodeD);
    l=checkalv(btnodeD->left);
    r=checkalv(btnodeD->right);
    x=abs(l-r);
    if(x>1) printf("\ncay khong can bang");
    else printf("\ncay can bang");
}
