#include<stdio.h>
#include<conio.h>
#define max 10
void create();
void deletion();
void search();
void insert();
void display();
int a,b[20],p,e,i,n,pos;
void main(){
    int ch;
    char g='y';
    do{
        printf("\nMain Menu");
        printf("\n1.Create\n2.Delete\n3.Search\n4.Insert\n5.Display\n6.Exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                create();
                break;
            case 2:
                deletion();
                break;
            case 3: 
                search();
                break;
            case 4:
                insert();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Invalid");
        }
        printf("\nDo you want to continue:");
        scanf("%c",&g);
    }while(g=='y'||g=='Y');
    getch();
}
void create(){
    printf("\n Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
}
void deletion(){
    printf("\n Enter the position to delete:");
    scanf("%d",&pos);
    if(pos>=n){
        printf("invalid position");
    }
    else{
        for(i=pos+1;i<n;i++){
            b[i-1]=b[i];
        }
        n--;
    }
    printf("\n The elements after deletion are:");
    for(i=0;i<n;i++){
        printf("\t%d",b[i]);
    }
}
void insert(){
    printf("\n Enter the posotion to insert:");
    scanf("%d",&pos);
    if(pos>=n){
        printf("\n Invalid Position");
    }
    else{
        for(i=max-1;i>=pos;i--){
            b[i+1]=b[i];
        }
        printf("\n Enter the element to insert:");
        scanf("%d",&p);
        b[pos]=p;
        n++;
    }
    printf("\n The list after insertion:");
    display();
}
void search(){
    printf("\n Enter the element to search:");
    scanf("%d",&e);
    for(i=0;i<n;i++){
        if(b[i]==e){
            printf("\n The element is found at %dth posotion",i+1);
        }
        else{
            printf("\n The element is not found");
        }
    }
}
void display(){
    printf("\n The elements of the list ADT are:");
    for(i=0;i<n;i++){
        printf("\t%d",b[i]);
    }
}