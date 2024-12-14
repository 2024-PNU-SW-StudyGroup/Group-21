#include <stdio.h>

int main(){
    int word[10]={0,};
    int nameozi[42]={0,};
    int count =0;
    int k1[10]={0,};
    
    for (int k=0;k<10;k++){
    scanf("%d",&word[k]);
    }
    
    for(int k=0;k<10;k++){
        k1[k] = word[k]%42;
    }
    
    for (int k =0; k<10;k++){
        if (nameozi[k1[k]] == 0){
            nameozi[k1[k]] = 1;
            count ++;
        }
    }
    printf("%d",count);   
    
}