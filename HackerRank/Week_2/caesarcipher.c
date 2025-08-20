#include <stdio.h>
#define MAX 100005

int main() {
    int n, k;
    char s[MAX];

    scanf("%d", &n);
    scanf("%s", s);
    scanf("%d", &k);

    k %= 26;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c >= 'a' && c <= 'z') {
            c = (char)('a' + (c - 'a' + k) % 26);
        } else if (c >= 'A' && c <= 'Z') {
            c = (char)('A' + (c - 'A' + k) % 26);
        }
        s[i] = c;
    }

    printf("%s\n", s);
    return 0;
}
