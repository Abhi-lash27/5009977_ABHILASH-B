#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int primary(int n,int mat[][MAX]){
    int primary_sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                primary_sum += mat[i][j];
            }
        }
    }
    return primary_sum;
}

int secondary(int n,int mat[][MAX]){
    int secondary_sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)==n-1){
                secondary_sum += mat[i][j];
            }
        }
    }
    return secondary_sum;
}


int main(){
    int n;
    scanf("%d",&n);
    int mat[MAX][MAX];
    
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    
    int sum = abs(primary(n, mat) - secondary(n,mat));
    printf("%d",sum);
}
