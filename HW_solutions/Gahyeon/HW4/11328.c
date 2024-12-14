#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26

int is_possible(const char *a, const char *b) {
    int count_a[ALPHABET_SIZE] = {0};
    int count_b[ALPHABET_SIZE] = {0};
    
    for (int i = 0; a[i] != '\0'; i++) count_a[a[i] - 'a']++;
    
    for (int i = 0; b[i] != '\0'; i++) count_b[b[i] - 'a']++;
    
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (count_a[i] != count_b[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    char a[101], b[101];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %s", a, b);
        if (is_possible(a, b)) printf("Possible\n");
        else printf("Impossible\n");
    }

    return 0;
}

// runtime error....