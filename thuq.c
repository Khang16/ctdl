#include<stdio.h>
#include<stdlib.h>
typedef struct kkk{
    int data;
    int diem;
    struct kkk *next;
}KKK;
void check(KKK *head,int n,int k){
    if(head==NULL){
        return;
    }
    int dem=0;
    for(KKK *i=head;i!=NULL;i=i->next){
        if(head!=NULL && i->data==k){
            printf("%d",i->diem);
            dem++;
        }
    }
    if(dem==0){
        printf("No data");
    }
}
int main(){
    KKK *new,*head;
    int n,k;
    scanf("%d%d",&n,&k);
    new=malloc(sizeof(KKK));
    head=new;
    for(int i=1;i<n;i++){
        scanf("%d",&new->data);
        scanf("%d",&new->diem);
        new->next=malloc(sizeof(KKK));
        new=new->next;
    }
    scanf("%d",&new->data);
    scanf("%d",&new->diem);
    new->next=NULL;
    check(head,n,k);
}