#include<stdio.h>
#include<stdlib.h>
typedef struct Listnode
{
    int data;
    int diem;
    char que[100];
    char name[100];
    struct Listnode *next;
}ListNode;
int main(){
    ListNode *newmode,*head;
    FILE *read=fopen("bai4.inp","r");
    int n,k;
    fscanf(read,"%d%d",&n,&k);
    newmode=malloc(sizeof(ListNode));
    head=newmode;
    for(int i=1;i<n;i++){
        fscanf(read,"%d",&newmode->data);
        fscanf(read,"%d",&newmode->diem);
        fscanf(read,"%s",newmode->name);
        fscanf(read,"%s",newmode->que);
        newmode->next=malloc(sizeof(ListNode));
        newmode=newmode->next;
    }
    fscanf(read,"%d",&newmode->data);
    fscanf(read,"%d",&newmode->diem);
    fscanf(read,"%s",newmode->name);
    fscanf(read,"%s",newmode->que);
    newmode->next=NULL;
    fclose(read);
    read=fopen("bai4.out","w");
    int dem=0;
    for(ListNode *i=head;i!=NULL;i=i->next){
        if(head!=NULL && i->diem>=k){
            dem++;
        }
    }
    fprintf(read,"Tong so thi sinh trung tuyen: %d\n",dem);
    for(ListNode *i=head;i!=NULL;i=i->next){
        if(head!=NULL && i->diem>=k){
            fprintf(read,"%d %d %s %s\n",i->data,i->diem,i->name,i->que);
        }
    }
    fclose(read);
}