#include<stdio.h>

int count_pages(int n,int p){
    int front = p/2;
    int back = (n/2)-(p/2);
    return (front<back)?front:back;
}
int main(){
    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
    int result = count_pages(n,p);
    printf("%d",result);
}
