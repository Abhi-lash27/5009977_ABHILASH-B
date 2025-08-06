#include<stdio.h>
#include<stdlib.h>

//compare 2 values
int compare(const void *a,const void *b){
    return(*(int*)a - *(int*)b);
} 

//returning the unqiue value
int unique(int n,int arr[]){
    for(int i=0;i<n-1;i+=2){
        if(arr[i]!=arr[i+1]){
            return arr[i];
        }
    }
    return arr[n-1];
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    int result = unique(n, arr);
    printf("%d",result);
}