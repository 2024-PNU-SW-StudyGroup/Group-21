#include <stdio.h>

int main(void) {
    char s[100];
    scanf("%s", s);
    char occur[26] = {0,};
    for (int i = 0; s[i] != '\0'; i++) {
        occur[s[i]-'a']++;
    }
    for (int i=0; i<26; i++){
        printf("%d", occur[i]);
        printf(" ");
    }
    return 0;
}