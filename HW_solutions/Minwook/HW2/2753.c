#include <stdio.h>

int check(int a){
    if (a%4==0 && a%100 != 0) {
        return 1;
    }
    else if(a%400==0){
        return 1 ;
    }

    else{
        return 0;
    }
}



int main() {
    int year ;
    scanf("%d",&year);
    printf("%d",check(year));
    return 0;
}