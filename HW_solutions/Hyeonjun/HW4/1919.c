#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char eng_f[26]={0,}, eng_s[26]={0,};
    char fst[1001]={0}, scnd[1001]={0};
    int count=0;
    scanf("%s\n%s",fst,scnd);
    for (int i = 0;i<1001;i++){
        if (fst[i]==0 && scnd[i]==0) break;
        eng_f[fst[i]-97]++;
        eng_s[scnd[i]-97]++;
    }
    for (int i=0;i<26;i++){
        if(eng_f[i]!=eng_s[i]) count+= abs(eng_f[i]-eng_s[i]);
    }
    printf("%d", count);
    return 0;
}