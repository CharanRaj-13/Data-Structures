#include<stdio.h>
#include<conio.h>
#define max 5
static int stack[max];
int top=-1;
void push(int x){
    stack[++top]=x;
}
int pop(){
    return(stack[top--]);
}
void view(){
    int i;
    if(top<0)
        printf("Stack Empty");
    else{
            printf("\nTop-->");
            for(i=top;i>=0;i--){
                printf("%4d",stack[i]);
            }
            printf("<--End");
    }
}
int main(){
    int ch=0,val;
    while(ch!=4){
        printf("Stack Operation Menu");
        printf("\n 1.Push\n2.Pop\n3.View\n4.Exit");
        printf("\n Enter your choice");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                if(top<max-1){
                    printf("Enter the element");
                    scanf("%d",&val);
                    push(val);
                }
                else{
                    printf("\nStack is full");
                }
                break;
            case 2:
                if(top<0){
                    printf("\n Stack is empty");
                }
                else{
                    val=pop();
                    printf("\n The popped value is:%d",val);
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