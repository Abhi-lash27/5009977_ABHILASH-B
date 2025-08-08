#include<stdio.h>
#include <stdlib.h>
#define MAX 1000

int compareAsc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int compareDesc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

void permutation(int q){
    while(q--){
        int n,k;
        scanf("%d %d",&n,&k);
        int A[MAX];
        int B[MAX];
        
        for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
        for(int i=0;i<n;i++){
        scanf("%d",&B[i]);
    }
        qsort(A,n,sizeof(int),compareAsc);
        qsort(B,n,sizeof(int),compareDesc);
    
    int check=1;
    for(int i=0;i<n;i++){
        if(A[i]+B[i]<k){
            check=0;
        }
    }
    if(check){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    }
}

int main(){
    int q;
    scanf("%d",&q);
    permutation(q);
}
