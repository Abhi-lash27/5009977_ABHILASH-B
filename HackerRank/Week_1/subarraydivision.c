#include<stdio.h>
void subarray(int n){
    int d,m;
    int s[100];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    scanf("%d %d",&d,&m);
    
    int count = 0;
    for(int i=0;i<=n-m;i++){
        int sum =0;
        for(int j=i;j<i+m;j++){
            sum+=s[j];
        }
        if(sum == d){
            count++;
        }
    }
    
    printf("%d\n",count);
}
int main(){
    int n;
    scanf("%d",&n);
    subarray(n);
    return 0;
}
