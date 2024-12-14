#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[1001], str2[1001];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, result = 0;

    scanf("%s", str1);
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++) freq1[str1[i] - 'a']++;

    for (i = 0; str2[i] != '\0'; i++) freq2[str2[i] - 'a']++;

    for (i = 0; i < 26; i++) result += abs(freq1[i] - freq2[i]);

    printf("%d\n", result);

    return 0;
}