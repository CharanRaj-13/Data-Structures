#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k,n,a[20],p=0,t;
    printf("\n Enter the number of elements:");
    scanf("%d",&n);
    printf("\n Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
        for(j=0;j<i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        p++;
        printf("\n After pass:%d",p);
        for(k=0;k<n;k++){
            printf("\t %d",a[k]);
        }
    }
    printf("\n The sorted array:");
    for(i=0;i<n;i++){
        printf("\t %d",a[i]);
    }
}