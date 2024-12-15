#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);
    for (int i=0; i<N; i++){
        int f=0;
        int e=0;
        int a[26]={0}, b[26]={0};
        char c[1001]={0}, d[1001]={0};
        scanf("%s %s", c, d);
        while (c[e] != 0 ){
            a[c[e]-'a']++;
            b[d[e]-'a']++;
            e++;
        }
        for (int j=0; j<26; j++){
            if (a[j] != b[j]){
                f = 1;
                break;
            }
        }
        if (f==0){
            printf("Possible\n");
        }
        else {
            printf("Impossible\n");
        } 
    }
    return 0;
}
