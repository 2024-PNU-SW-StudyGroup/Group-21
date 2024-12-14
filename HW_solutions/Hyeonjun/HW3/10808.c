#include <stdio.h> 


int main(void) {
    char eng[101];
    int alph[26]={0,};
    scanf("%s",eng);

 
    for (int i = 0; eng[i]!='\0' ; i++){
        alph[eng[i]-'a']++;
    }
    for(int i = 0; i<26; i++) printf("%d ",alph[i]); 
	return 0;
}