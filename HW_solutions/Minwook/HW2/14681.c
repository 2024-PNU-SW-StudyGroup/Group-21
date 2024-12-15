#include <stdio.h>

int check(int a, int b){
    if (a>0 && b>0) {
        return 1;
    }
    else if(a<0 && b>0){
        return 2 ;
    }
    else if(a<0 && b<0){
        return 3 ;
    }
    else if(a>0 && b<0){
        return 4 ;
    }
    // 아무런 조건이 아닐때 return 값이 존재하지 않음 
    // else 와 리턴값을 명시해 void 함수가 되지 않도록 명시 바람...
    // 그래도 good
}



int main() {
    int x,y ;
    scanf("%d%d",&x,&y);
    printf("%d",check(x,y));
    return 0;
}