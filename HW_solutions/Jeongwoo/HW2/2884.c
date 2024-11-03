#include <stdio.h>
int main(void){
    int h,m;
    scanf("%d %d",&h,&m);
    printf("%d ",(h*60+m-45)<0?23:((h*60+m-45)/60));
    printf("%d",(m+15)%60);
}