#include <stdio.h>
#include <stdlib.h>
typedef struct btree{
    int data;
    struct btree *lchild,*rchild;
}BTree;
 
void createTree(BTree **b);
void inorderTree(BTree *b);
BTree * convert(BTree *b);
void converNode(BTree *b,BTree **p);
 
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        BTree *b =NULL;// (BTree *)malloc(sizeof(BTree));   
        createTree(&b);
        BTree *head = convert(b);
        while(head!=NULL){
            printf("%d ",head->data);
            head = head->rchild;
        }
        printf("\n");
    }
    return 0;
}
BTree* convert(BTree *b){
    BTree *pLast = NULL;
    converNode(b,&pLast);
 
    BTree *phead = pLast;
    while(phead != NULL && phead->lchild != NULL)
        phead = phead->lchild;
    return phead;
}
void converNode(BTree *b,BTree **p){
    if(b == NULL)
        return ;
    BTree *pnow = b;
    if(b->lchild != NULL)
        converNode(b->lchild,p);
     
    pnow->lchild = *p;
    if(*p != NULL)
        (*p)->rchild = pnow;
 
    *p = pnow;
 
    if(b->rchild != NULL)
        converNode(b->rchild,p);
}
void createTree(BTree **b){  
    int m;
    scanf("%d",&m);
    if(m == 0)
        *b = NULL;
    else{
        BTree *s = (BTree *)malloc(sizeof(BTree));
        s->data = m;
        s->lchild = NULL;
        s->rchild = NULL;
        *b = s;
        createTree(&((*b)->lchild));
        createTree(&((*b)->rchild));
    }
}
/**************************************************************
    Problem: 1503
    User: xhalo
    Language: C
    Result: Accepted
    Time:80 ms
    Memory:1704 kb
****************************************************************/