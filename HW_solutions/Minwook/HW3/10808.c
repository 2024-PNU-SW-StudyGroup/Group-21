#include <stdio.h>

int main(){
    char word[1000]={'\0',};
    scanf("%s",word);
    int alphabet[26]={0,};
    
    
    
    
    for (int k=0 ;word[k]!='\0'; k++){
        char text;
        alphabet[word[k]-'a']++;
    }
    







    for(int k=0;k<26;k++){
        printf("%d ",alphabet[k]);
    }
}