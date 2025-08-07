#include<stdio.h>
#define MAX 1000000

int counting(int n){
    int count[MAX] = {0};
    int num;
    for(int i =0;i<n;i++){
        scanf("%d",&num);
        count[num]++;
    }
    for(int i=0;i<100;i++){
        printf("%d ",count[i]);
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    counting(n);
}
