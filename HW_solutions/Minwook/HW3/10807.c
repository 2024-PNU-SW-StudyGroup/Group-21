#include <stdio.h>

int main(){
    int length,want;
    int time=0;
    scanf("%d",&length);
    int a[length];

    for(int st = 0;st<length;st++){
        scanf("%d",&a[st]);
    }
    scanf("%d",&want);
    for(int st = 0;st<length;st++){
        if (a[st]==want){
            time++;
        }
    }
    printf("%d",time);
}