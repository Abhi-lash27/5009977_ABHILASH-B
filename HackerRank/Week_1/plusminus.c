#include<stdio.h>

void plusminus(int n,int arr[]){
    int pos=0,neg=0,zero=0;
    for (int i=0;i<n;i++){
        if(arr[i]>0){
            pos+=1;
        }else if(arr[i]<0){
            neg+=1;
        }else{
            zero+=1;
        }
    }
    printf("%.6f\n",(float)pos/n);
    printf("%.6f\n",(float)neg/n);
    printf("%.6f\n",(float)zero/n);
}
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    plusminus(n, arr);
    return 0;
}