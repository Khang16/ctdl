#include <stdio.h>
#include <stdlib.h>
typedef struct listnode {
	int data;
	int tp;
	struct listnode *next;
}Listnode;
 
 
void insert(Listnode *head ,int k,int x ,Listnode *temp){
	Listnode *curnode=head,*newNode=NULL;int i=2;
	if(curnode==NULL)return;
 
	while(curnode!=NULL){
		if(i!=k){
			curnode=curnode->next;
		}
		else if(i==k){
			Listnode *temp=malloc(sizeof(Listnode));
			temp->data=x;
			temp->next=curnode->next;
			curnode->next=temp;
			curnode=curnode->next; 
		}
		i++;
	}
 
}
 
 
void print(Listnode *head){
	Listnode *cur=head;
	if(cur==NULL) return;
	while(cur!=NULL){
		printf("%d ",cur->data);
		cur=cur->next;
	}
}
 
 
int main(){
	Listnode *newNode,*head,*temp;
	int n,k,x;scanf("%d",&n);scanf("%d",&k);scanf("%d",&x);
	newNode=malloc(sizeof(Listnode));
	head=newNode;	int i;
	// nhap
	for (i = 1; i < n; i++) {
		scanf("%d",&newNode->data);
		newNode->next=malloc(sizeof(Listnode));
		newNode=newNode->next;
 	}
	scanf("%d",&newNode->data);
	newNode->next=NULL;
	insert(head,k,x,temp);
	// chen
	print(head);
 
}