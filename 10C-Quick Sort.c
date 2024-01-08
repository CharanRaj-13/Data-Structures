#include<stdio.h>
#include<conio.h>
void qsort(int arr[20],int fst,int lst){
    int i,j,pivot,tmp;
    if(fst<lst){
        pivot=fst;
        i=fst;
        j=lst;
        while(i<j){
            while(arr[i]<=arr[pivot]&&i<lst){
                i++;
            }
            while(arr[j]>arr[pivot]){
                j--;
            }
            if(i<j){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
        tmp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=tmp;
        qsort(arr,fst,j-1);
        qsort(arr,j+1,lst);
    }
}
void main(){
    int n,a[20],i;
    printf("\n ENter the array size:");
    scanf("%d",&n);
    printf("\n Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,0,n-1);
    printf("\n Sorted AArray");
    for(i=0;i<n;i++){
        printf("\t %d",a[i]);
    }
}