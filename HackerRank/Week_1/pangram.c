#include<stdio.h>
#include <ctype.h>
#define ALPHA_COUNT 26

void Pangram(char s[]){
    int letters[ALPHA_COUNT] = {0};
    int index;
    
    for(int i=0;s[i] != '\0';i++){
        if(isalpha(s[i])){
            index = tolower(s[i])- 'a';
            letters[index]=1;
        }
    }
    
    for(int i=0;i<ALPHA_COUNT;i++){
        if(letters[i]==0){
            printf("not pangram");
            return;
        }
    }
    printf("pangram");
}

int main(){
    char s[1000];
    fgets(s,sizeof(s),stdin);
    Pangram(s);
}