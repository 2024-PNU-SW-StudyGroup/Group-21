#include <stdio.h>

int main() {
    int time, minute;

    scanf("%d%d",&time,&minute);

    if (time==0 && minute<45){
        time = 23, minute = 60-(45-minute);
    }
    else if (time == 0 && minute >= 45){
        minute = minute-45;
        }
    else if (time != 0 && minute >= 45) {
        minute = minute - 45;
    }
    else if (time != 0 && minute < 45){
        time = time - 1, minute = minute+15;
    }
    printf("%d %d",time,minute);
    return 0;
}