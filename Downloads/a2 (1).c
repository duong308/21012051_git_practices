#include <stdio.h>
#include <stdlib.h>

typedef struct _btnode2 {
    char item;
    struct _btnode2 *left;
    struct _btnode2 *right;
} BTNode2;

void TreeTraversal_InOrder2(BTNode2 *cur) {
    if (cur == NULL);
	TreeTraversal_InOrder(cur->left);
    printf("%d ",cur->item);
    TreeTraversal_InOrder(cur->right);
}

___  BSTT(BTNode2 *cur, char c) {
    if (cur == NULL)
        return NULL;
    if (c==cur->item) 
return ___;
    if (c < cur->item)
        return ___;
    else
        return ___;
}

BTNode2* BSTT2(BTNode2 *cur, char c) {
    if (c==cur->item) 
        return NULL;
    if (c < cur->item) {
        if (cur->left == ___ )
            return ___;
        return BSTT2(___);
    }
    else {
        if (cur->right == ___)
            return ___;
        return BSTT2(___);
    }
}

int main(void) {
    BTNode2 *btnodeA, *btnodeB, *btnodeC, *btnodeD, *btnodeE, *btnodeF, *btnodeG, *btnodeH, *btnodeI, *btnodeJ, *btnodeK, *btnodeL, *btnodeM;
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

    btnodeA->item='A';
    btnodeB->item='B';
    btnodeC->item='C';
    btnodeD->item='D';
    btnodeE->item='E';
    btnodeF->item='F';
    btnodeG->item='G';
    btnodeH->item='H';
    btnodeI->item='I';
    btnodeJ->item='J';
    btnodeK->item='K';
    btnodeL->item='L';
    btnodeM->item='M';

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

    printf("\n\nCay nhi phan tim kiem truoc khi chen:\n ");
    TreeTraversal_InOrder2( ___ );

    // Insert
    char q = 'Q';
    ___  posNode = BSTT2( ___ );

    BTNode2 *btNewNode = malloc( ___ );
    btNewNode->item = q;
    btNewNode->left = NULL;
    btNewNode->right = NULL;
    if (posNode == NULL) {
        printf("Phan tu da ton tai");
        return 0;
    }

    if (q < posNode->item)
        // B? sung m� chuong tr�nh 
    else 
        // B? sung m� chuong tr�nh 

    printf("\n\nCay nhi phan tim kiem sau khi chen:\n ");
    TreeTraversal_InOrder2(btnodeH);
}
