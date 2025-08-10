#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b){
    return (*(int*)a - *(int*)b);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[1000001];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    
    int median = n/2;
    printf("%d",arr[median]);
}