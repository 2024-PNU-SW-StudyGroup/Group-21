#include <stdio.h>

int main(void) {
    char str1[1001];
    char str2[1001];
    char occur1[26] = {0,};
    char occur2[26] = {0,};
    int res = 0, tmp;
    scanf("%s %s", str1, str2);
    for(int i = 0; str1[i] != 0; i++) {
        occur1[str1[i]-'a']++;
    }
    for(int i = 0; str2[i] != 0; i++) {
        occur2[str2[i]-'a']++;
    }
    for(int i = 0; i < 26; i++) {
        tmp = occur1[i] - occur2[i];
        if (tmp > 0) res += tmp;
        else if (tmp < 0) res -= tmp;
    }
    printf("%d\n", res);

    return 0;
}