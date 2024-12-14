#include <stdio.h>

int main() {
    char word[101];
    int count[26] = {0};

    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++) count[word[i] - 'a']++;

    for (int i = 0; i < 26; i++) printf("%d ", count[i]);
    printf("\n");

    return 0;
}