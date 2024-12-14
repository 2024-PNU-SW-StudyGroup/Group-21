#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    while(n--) {    
        int occur[26] = {0,};
        char str1[1001], str2[1001];
        scanf("%s", str1);
        for(int i = 0; str1[i]; i++) {
            occur[str1[i] - 'a']++;
        }
        scanf("%s", str2);
        for(int i = 0; str2[i]; i++) {
            occur[str2[i] - 'a']--;
        }
        int flag = 1;
        for(int i = 0; i < 26; i++) {
            if (occur[i]) {
                printf("Impossible\n");
                flag = 0;
                break;
            }
        }
        if (flag) printf("Possible\n");
    }
    return 0;
}