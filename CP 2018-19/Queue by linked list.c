#include <stdio.h>
#include <malloc.h>
struct node1{
    int dt;
    struct node1 *next;
};
typedef struct node1 node;
node *start=NULL;
void enqueue(int x)
{
    node *first=(node*)malloc(sizeof(node));

    first->dt=x;
    first->next=start;
    start=first;
}
void dequeue()
{
    node *temp = (node*)malloc(sizeof(node));
    node *prv = (node*)malloc(sizeof(node));
    temp=start;

    if(start==NULL){
        printf("Dequeue can not possible..List Empty..\n");
        return;
    }
    else if(temp->next==NULL){
        start=NULL;
        return;
    }

    while(temp->next!=NULL){
        prv=temp;
        temp=temp->next;
    }

    prv->next=NULL;
}
void display()
{
   node *temp=(node*)malloc(sizeof(node));
    temp=start;
   while(1){
        if(temp==NULL){
            printf("List is Empty...\n");
            return;
        }

        printf("%d ",temp->dt);
        if(temp->next==NULL){
            break;
        }
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    int n,x,i;

    printf("Enter the QUEUE LIST Size : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("Enter The value : ");
        scanf("%d",&x);
        enqueue(x);
        display();
    }
    printf("Enter how many times you want to dequeue : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        dequeue();
    }
    printf("Dequeuing..");
    display();

    return 0;
}
