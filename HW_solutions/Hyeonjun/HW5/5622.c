#include <stdio.h>

int time(char alph){
    if (alph >= 'A' && alph <= 'C') return 3;
    else if (alph >= 'D' && alph <= 'F') return 4;
    else if (alph >= 'G' && alph <= 'I' )  return 5;
    else if (alph >= 'J' && alph <= 'L') return 6;
    else if (alph >= 'M' && alph <= 'O') return 7;
    else if (alph >= 'P' && alph <= 'S') return 8;
    else if (alph >= 'T' && alph <= 'V') return 9;
    else return 10;
}

int main(void){

    char word[16]={0};
    scanf("%s",word);
    int sum=0;
    for (int i = 0;;i++){
        if (word[i]==0) 
            break;
        else 
            sum+=time(word[i]);
        
    }
    printf("%d",sum);
    return 0;
}