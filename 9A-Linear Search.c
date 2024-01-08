#include<stdio.h>
#include<conio.h>
void main(){
    int a[20],n,i,val,found;
    printf("\n Enter the number of elements:");
    scanf("%d",&n);
    printf("\n Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n Enter the  value to locate:");
    scanf("%d",&val);
    found=0;
    for(i=0;i<n;i++){
        if(a[i]==val){
            printf("\n Element found at %dth position",i);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("\nElement not found");
    }
}