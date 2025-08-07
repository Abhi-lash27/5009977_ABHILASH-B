#include<stdio.h>

void flippingbits(unsigned int n){
    printf("%u\n", ~n & 0xFFFFFFFF);
}

int main(){
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        unsigned int n;
        scanf("%u",&n);
        flippingbits(n);
    }
    return 0;
}
