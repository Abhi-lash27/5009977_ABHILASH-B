#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b){
    return (*(int*)a - *(int*)b);
}

void minimax(int n,int arr[]){
    long long min=0,max=0;
    for (int i=0;i<n-1;i++){
        min+=arr[i];
    }
    for (int i=4;i>0;i--){
        max+=arr[i];
    }
    printf("%lld %lld",min,max);
}
int main(){
    int n=5;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    qsort(arr,n,sizeof(int),compare);
    minimax(n,arr);
    return 0;
}
