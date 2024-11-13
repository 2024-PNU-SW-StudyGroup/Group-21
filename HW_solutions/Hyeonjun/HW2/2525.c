#include <stdio.h>
int main(void)
{
    int hour=0, minute=0,time=0;
    scanf("%d %d",&hour,&minute);
    scanf("%d",&time);
    if (time+minute<60) 
    {
        minute+=time;
        printf("%d %d\n",hour,minute);
    }
    else{
        hour+=((time+minute)/60);
        minute=(time+minute)%60;
        if (hour>=24) hour-=24;
        printf("%d %d\n",hour,minute);
    }
    return 0;
}