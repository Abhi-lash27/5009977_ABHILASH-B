#include <stdio.h>
#include <string.h>
#define MAX 100000


int digitsum(long long num) {
    if (num < 10) return num; 

    long long sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return digitsum(sum);
}

int main() {
    char n[MAX]; 
    int k;
    scanf("%s %d", n, &k);

    long long sum = 0;
    for (int i = 0; i < strlen(n); i++) {
        sum += (n[i] - '0');
    }
    sum *= k;

    printf("%d\n", digitsum(sum));

    return 0;
}
