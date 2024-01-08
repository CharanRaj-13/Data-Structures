#include<stdio.h>
int binarysearch(int arr[],int low,int high,int target){
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==target)    
            return mid;
        if(arr[mid<target])
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main(){
    int i,n,arr[20],target,res;
    printf("\n Enter the number of elements:");
    scanf("%d",&n);
    printf("\n Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n Enter the element to search:");
    scanf("%d",&target);
    res=binarysearch(arr,0,n-1,target);
    if(res!=-1){
        printf("\n Element is found at %d",res);
    }
    else{
        printf("\n Element not found");
    }
}