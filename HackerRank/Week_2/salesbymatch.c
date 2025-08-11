#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b){
    return (*(int*)a - *(int*)b);
}

int salesbymatch(int n,int arr[]){
    int count=0;
    
    for(int i=0;i<n;){
        if(arr[i]==arr[i+1]){
                count+=1;
                i+=2;
        }else{
            i++;
        }
    }
    return count;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    
    int result = salesbymatch(n, arr);
    printf("%d",result);
}