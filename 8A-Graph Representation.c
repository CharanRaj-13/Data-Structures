#include<stdio.h>
#define v 5
void init(int arr[][v]){
    int i,j;
    for(i=0;i<v;i++){
        for(j=0;j<v;j++){
            arr[i][j]=0;
        }
    }
}
void addEdge(int arr[][v],int src,int des){
    arr[src][des]=1;
}
void printMatrix(int arr[][v]){
    int i,j;
    for(i=0;i<v;i++){
        for(j=0;j<v;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int adjMatrix[v][v];
    init(adjMatrix);
    addEdge(adjMatrix,0,1);
    addEdge(adjMatrix,0,2);
    addEdge(adjMatrix,0,3);
    addEdge(adjMatrix,1,2);
    addEdge(adjMatrix,1,4);
    addEdge(adjMatrix,2,2);
    addEdge(adjMatrix,2,4);
    printMatrix(adjMatrix);
    getch();
    return 0;
}