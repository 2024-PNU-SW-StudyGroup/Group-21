#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int goal = a*b*c;
    int num[10]={0,};
    while (goal > 0) {
        int digit = goal % 10;
        num[digit]++;
        goal /= 10;
    }
    for(int k=0;k<10;k++){
        printf("%d\n",num[k]);
    }
}