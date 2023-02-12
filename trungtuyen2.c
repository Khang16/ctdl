#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <string.h>
typedef struct Listnode
{
    int data;
    int diem;
    char que[25];
    char name[25];
    struct Listnode *next;
}ListNode;
int main(){
    ListNode *newmode,*head;
    FILE *viet=fopen("bai5.inp","r");
    int n,k;
    char quequan[25];
    fscanf(viet,"%d%d",&n,&k);
    fscanf(viet,"%s",quequan);
    newmode=malloc(sizeof(ListNode));
    head=newmode;
    for(int i=1;i<n;i++){
        fscanf(viet,"%d",&newmode->data);
        fscanf(viet,"%d",&newmode->diem);
        fscanf(viet,"%s",newmode->name);
        fscanf(viet,"%s",newmode->que);
        newmode->next=malloc(sizeof(ListNode));
        newmode=newmode->next;
    }
    fscanf(viet,"%d",&newmode->data);
    fscanf(viet,"%d",&newmode->diem);
    fscanf(viet,"%s",newmode->name);
    fscanf(viet,"%s",newmode->que);
    newmode->next=NULL;
    fclose(viet);
    viet=fopen("bai5.out","w");
    int dem=0;
    fprintf(viet,"Tinh: %s\n",quequan);
    for(ListNode *i=head;i!=NULL;i=i->next){
        if(i->diem>=k && strcmp(i->que,quequan)==0){
            dem++;
        }
    }
    fprintf(viet,"Tong so thi sinh trung tuyen: %d\n",dem);
    for(ListNode *i=head;i!=NULL;i=i->next){
        if(i->diem>=k && strcmp(i->que,quequan)==0){
            fprintf(viet,"%d %d %s\n",i->data,i->diem,i->name);
        }
    }
    fclose(viet);
    return 0;
}