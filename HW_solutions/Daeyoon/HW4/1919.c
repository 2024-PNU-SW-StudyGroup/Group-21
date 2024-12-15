#include <stdio.h>

int main(void){
    int N=0, e;
    int a[26]={0}, b[26]={0};
    char c[1000]={0}, d[1000]={0};
    scanf("%s\n %s", c, d);
    for (e=0; e<1000; e++){
        while (c[e]!=0){
            a[c[e]-'a']++;
            b[d[e]-'a']++;
        }
    }
    for (int i=0; i<26; i++){
        if (a[i] < b[i]){
            N += a[i] - b[i];
        }
        else {
            N += b[i] - a[i];
        }
        printf("%d", N);
        return 0;
    }
}

// time out....