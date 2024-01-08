#include<stdio.h>
#include<conio.h>
#define max 5
static int queue[max];
int front=-1;
int rear=-1;
void insert(int x){
    queue[++rear]=x;
    if(front==-1){
        front=0;
    }
}
int deletion(){
    int val;
    val=queue[front];
    if(front==rear&&rear==max-1){
        front=rear=-1;
    }
    else{
        front++;
        return(val);
    }
}
void view(){
    int i;
    if(front==-1){
        printf("\n Queue is empty");
    }
    else{
        printf("Front-->");
        for(i=front;i<=rear;i++){
            printf("%4d",queue[i]);
        }
        printf("<--Back");
    }
}
int main(){
    int ch=0,val;
    while(ch!=4){
        printf("\n Queue Operation Menu");
        printf("\n1.Insert\n2.Delete\n3.View\n4.Exit");
        printf("\n Enter your option");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                if(rear<max-1){
                    printf("\nEnter element to insert");
                    scanf("%d",&val);
                    insert(val);
                }
                else{
                    printf("Queue Full");
                }
                break;
            case 2:
                if(front==-1){
                    printf("\nQueue Full");
                }
                else{
                    val=deletion();
                    printf("\n The deleted value is %d",val);
                }
                break;
            case 3:
                view();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\n Invalid");
        }
    }
}