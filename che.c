#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct listnode *next;
    struct listnode *prev;
}NODE;
typedef struct listnode{
    NODE *dau;
    NODE *cuoi;
}LISTNODE;
void chencuoi(LISTNODE *tail,NODE *p,int k){
    p->data=k;
    NODE *newNODE=malloc(sizeof(NODE));
    newNODE->cuoi=tail;
    tail=newNODE;
    printf("%d",newNODE->data);
}
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    LISTNODE *tail;
    NODE *p;
    NODE *new=malloc(sizeof(new));
    tail=new;
    for(int i=0;i<n;i++){
        scanf("%d",&new->data);
        new->next=malloc(sizeof(NODE));
        new=new->prev;
    }
    scanf("%d",&new->data);
    new->next=NULL;
    chencuoi(tail,p,k);
}